%{
int nb_ligne=1;     
extern yytext;
char type_temp[20];
char var_temp[20];
char const_temp[20];
char opr_temp[20];
int tab_temp;
%}
%union{
       char* str;
}
%token mc_docprogram mc_inf mc_pexcl mc_sup <str>mc_div <str>idf mc_sub mc_variable mc_as pvg 
       <str>mc_int <str>mc_flt <str>mc_bol <str>mc_chr <str>mc_str mc_barre mc_arr mc_dpts mc_const
       mc_egal mc_body mc_aff vrg mc_plus mc_moins mc_mult mc_input
       mc_output mc_if mc_then mc_else mc_and mc_or mc_not sup
       inf supe infe egal dif par_ov par_fr mc_do mc_while mc_for mc_until
       <str>cst_entier <str>cst_reel <str>cst_bol <str>cst_car <str>cst_chaine cr_ov cr_fr

%start S
%%
S:DEBUT_PRG PART_DEC PART_INST FIN_PRG{printf("programme syntaxiquement correcte!");
                   YYACCEPT;}
;
//début du programme-----------------------
DEBUT_PRG:mc_inf mc_pexcl mc_docprogram idf mc_sup
;
//partie déclarations de variables-----------------------
PART_DEC:DEB_DEC LISTE_DEC FIN_DEC
;
DEB_DEC:mc_inf mc_sub mc_variable mc_sup
;
LISTE_DEC:LISTE_DEC DEC 
         | 
;
DEC:DEC_VAR
    |DEC_ARR
    |DEC_CONST_VAL
    |DEC_CONST_TYPE
;
//variables-----------------------
DEC_VAR:mc_inf LIST_IDF mc_as TYPE mc_div mc_sup pvg {
                                                        if(declaration(var_temp) == 0)
                                                        {
                                                               insererTYPE(var_temp,type_temp);
                                                        }
                                                        else
                                                        {
                                                               printf("ERREUR SEMANTIQUE : double declaration, entite < %s >, ligne < %d >\n",var_temp, nb_ligne);
                                                        }
                                                        
                                                     }
;
LIST_IDF:idf mc_barre LIST_IDF {strcpy(var_temp, $1);}
         |idf { strcpy(var_temp, $1);}
;

//Array-----------------------
DEC_ARR:DEB_DEC_ARR LISTE_ARR FIN_DEC_ARR
;
DEB_DEC_ARR:mc_inf mc_arr mc_as TYPE mc_sup
;
LISTE_ARR:LISTE_ARR ARR 
          |ARR
;
ARR:mc_inf idf mc_dpts cst_entier mc_div mc_sup pvg {  
                                                        if(declaration($2) == 0)
                                                        {
                                                               insererTYPE($2,type_temp);
                                                               tab_temp = atoi($4);
                                                               sauvTailleTab($2,tab_temp);
                                                               if($4 == 0)
                                                               {
                                                                 printf("ERREUR SEMANTIQUE : taille tableau < %s > est == 0, ligne < %d >\n",$2,nb_ligne);
                                                               }
                                                        }
                                                        else
                                                        {
                                                               printf("ERREUR SEMANTIQUE : double declaration, entite < %s >, ligne < %d >\n",$2, nb_ligne);
                                                        }
                                                 }
;
FIN_DEC_ARR:mc_inf mc_div mc_arr mc_sup
;
//constantes-----------------------
DEC_CONST_VAL:DEB_DEC_CONST LISTE_CONST_VAL FIN_DEC_CONST
;
LISTE_CONST_VAL:LISTE_CONST_VAL CONST_VAL 
                |CONST_VAL
;
CONST_VAL:mc_inf idf mc_egal VALEUR mc_div mc_sup pvg {
                                                        insererConstanteVal($2, const_temp);
                                                        ConstanteTrue($2);
                                                       }
;
VALEUR:|cst_entier {strcpy(const_temp, $1);}
       |cst_reel {strcpy(const_temp, $1);}
       |cst_bol  { strcpy(const_temp, $1);}
       |cst_car  { strcpy(const_temp, $1);}
       |cst_chaine {strcpy(const_temp, $1);}
;
DEC_CONST_TYPE:DEB_DEC_CONST LISTE_CONST_TYPE FIN_DEC_CONST
;
LISTE_CONST_TYPE:LISTE_CONST_TYPE CONST_TYPE 
                 |CONST_TYPE 
;
CONST_TYPE:mc_inf idf mc_as TYPE mc_div mc_sup pvg {    ConstanteTrue($2);
                                                        if(declaration($2) == 0)
                                                        {
                                                               insererTYPE($2,type_temp);
                                                        }
                                                        else
                                                        {
                                                               printf("ERREUR SEMANTIQUE : double declaration, entite < %s >, ligne < %d >\n",$2, nb_ligne);
                                                        }
                                                   }
;
DEB_DEC_CONST:mc_inf mc_sub mc_const mc_sup
;
FIN_DEC_CONST:mc_inf mc_div mc_sub mc_const mc_sup
;
TYPE:mc_int {strcpy(type_temp, $1);}
     |mc_flt {strcpy(type_temp, $1);}
     |mc_bol {strcpy(type_temp, $1);}
     |mc_chr {strcpy(type_temp, $1);}
     |mc_str {strcpy(type_temp, $1);}
;
FIN_DEC:mc_inf mc_div mc_sub mc_variable mc_sup
;
//partie instructions-----------------------
PART_INST:DEB_INST LISTE_INST FIN_INST
;
DEB_INST:mc_inf mc_body mc_sup
;
LISTE_INST:LISTE_INST INSTRUCTION
            |
;
INSTRUCTION:AFFECTATION
            |LECTURE
            |ECRITURE
            |CONDITION
            |BOUCLE
;
//affectation
AFFECTATION:mc_inf mc_aff mc_dpts idf vrg EXPRESSION mc_div mc_sup {  if(declaration($4) != 0)
                                                                      {
                                                                      if(isConstante($4)==1)  
                                                                      {
                                                                             if(ConstanteVal($4)==1)  
                                                                             {
                                                                                 insererConstanteVal($4, const_temp);
                                                                             }    
                                                                             else
                                                                             {
                                                                                printf("ERREUR SEMANTIQUE: constante possede deja une valeur, entite < %s >, ligne < %d >\n", $4, nb_ligne);
                                                                             }
                                                                      }
                                                                      
                                                                      }
                                                                      else{
                                                                             printf("ERREUR SEMANTIQUE: non declaration, entite < %s >, ligne < %d >\n", $4, nb_ligne);
                                                                      }
                                                                   }
           |mc_inf mc_aff mc_dpts idf cr_ov cst_entier cr_fr vrg EXPRESSION mc_div mc_sup { if(declaration($4) == 0)
                                                                                            {
                                                                                                  printf("ERREUR SEMANTIQUE: non declaration, entite < %s >, ligne < %d >\n", $4, nb_ligne);
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                                  tab_temp = atoi($6);      
                                                                                                  if(tab_temp >=  tailleMaxTab($4))
                                                                                                  {
                                                                                                      printf("ERREUR SEMANTIQUE: depassement de la taille du tableau, entite < %s >,ligne < %d >\n",$4, nb_ligne);
                                                                                                  }
                                                                                            }
                                                                                             
                                                                                           }
;
EXPRESSION:EXPRESSION OPR_ARITHMETIQUE OPRAND {if((strcmp(opr_temp, "/")==0) && (strcmp(const_temp, "0")==0) || (strcmp(const_temp, "0.0")==0) || (strcmp(const_temp, "(+0.0)")==0 ) || (strcmp(const_temp, "(-0.0)")==0 ))
                                                        {
                                                              printf("ERREUR SEMANTIQUE: division par zero, ligne < %d >\n", nb_ligne); 
                                                        }
                                                   }
           |OPRAND 
;
OPRAND: idf {if(declaration($1) == 0)
              {
              printf("ERREUR SEMANTIQUE: non declaration, entite < %s >, ligne < %d >\n", $1, nb_ligne);
              }
            }
       |VALEUR 
;
//lecture
LECTURE:mc_inf mc_input mc_dpts idf cst_chaine mc_div mc_sup {if(declaration($4) == 0)
                                                               {
                                                                      printf("ERREUR SEMANTIQUE: non declaration, entite < %s >, ligne < %d >\n", $4, nb_ligne);
                                                               }
                                                               else
                                                               {
                                                                      if(SigneFormatageInOut($4, $5) == -1)
                                                                      {
                                                                             printf("ERREUR SEMANTIQUE: non compatibilite entre le type de l'idf et le signe de formatage , entite < %s > , ligne < %d >\n", $4, nb_ligne);
                                                                      }
                                                                      else
                                                                      {
                                                                             printf("ERREUR SEMANTIQUE: signe de formatage manquant , entite < %s > , ligne < %d >\n", $4, nb_ligne);
                                                                      }

                                                               }
                                                               }
;
//ecriture
ECRITURE:mc_inf mc_output mc_dpts cst_chaine mc_plus idf OUT mc_div mc_sup{ if(declaration($6) == 0)
                                                                            {
                                                                               printf("ERREUR SEMANTIQUE: non declaration, entite < %s >, ligne < %d >\n", $6, nb_ligne);
                                                                            }
                                                                            else
                                                                            {
                                                                               if(SigneFormatageInOut($6, $4) == -1)
                                                                               {
                                                                                    printf("ERREUR SEMANTIQUE: non compatibilite entre le type de l'idf et le signe de formatage , entite < %s > , ligne < %d >\n", $6, nb_ligne);
                                                                               }
                                                                               else
                                                                               {
                                                                                    printf("ERREUR SEMANTIQUE: signe de formatage manquant , entite < %s > , ligne < %d >\n", $6, nb_ligne);
                                                                               }
                                                                            }

                                                                             }
         |mc_inf mc_output mc_dpts cst_chaine mc_div mc_sup
;
OUT:mc_plus cst_chaine mc_plus idf OUT { if(declaration($4) == 0)
                                          {
                                                 printf("ERREUR SEMANTIQUE: non declaration, entite < %s >, ligne < %d >\n", $4, nb_ligne);
                                          }
                                          else
                                          {
                                          if(SigneFormatageInOut($4, $2) == -1)
                                          {
                                          printf("ERREUR SEMANTIQUE: non compatibilite entre le type de l'idf et le signe de formatage , entite < %s > , ligne < %d >\n", $4, nb_ligne);
                                          }
                                          else
                                          {
                                          printf("ERREUR SEMANTIQUE: signe de formatage manquant , entite < %s > , ligne < %d >\n", $4, nb_ligne);
                                          }
                                          }

                                          }
    |
;
//condition
CONDITION:DEB_COND BLOC_THEN BLOC_ELSE FIN_COND
;
DEB_COND:mc_inf mc_if mc_dpts EXPRESSION_COND mc_sup
;
BLOC_THEN:mc_inf mc_then mc_sup LISTE_INST mc_inf mc_div mc_then mc_sup
;
BLOC_ELSE:mc_inf mc_else mc_sup LISTE_INST mc_inf mc_div mc_else mc_sup 
;
FIN_COND:mc_inf mc_div mc_if mc_sup
;
//boucle
BOUCLE:BOUCLE_DO
       |BOUCLE_FOR
;
//boucle Do
BOUCLE_DO:mc_inf mc_do mc_sup LISTE_INST BLOC_WHILE mc_inf mc_div mc_do mc_sup
;
BLOC_WHILE:mc_inf mc_while mc_dpts EXPRESSION_COND mc_div mc_sup 
;
//boucle For
BOUCLE_FOR:mc_inf mc_for INITIALISATION mc_until BORNE_SUP mc_sup LISTE_INST mc_inf mc_div mc_for mc_sup
;
INITIALISATION:idf mc_egal cst_entier {if(declaration($1) == 0)
                                          {
                                          printf("ERREUR SEMANTIQUE: non declaration, entite < %s >, ligne < %d >\n", $1, nb_ligne);
                                          }
                                      }
;
BORNE_SUP:idf {if(declaration($1) == 0)
                     {
                     printf("ERREUR SEMANTIQUE: non declaration, entite < %s >, ligne < %d >\n", $1, nb_ligne);
                     }
              }
          |cst_entier
;
EXPRESSION_COND:OPR_LOGIQUE par_ov EXPRESSION_COND vrg EXPRESSION_COND par_fr
                |mc_not par_ov EXPRESSION_COND par_fr
                |OPR_COMPARAISON par_ov EXPRESSION vrg EXPRESSION par_fr
                |cst_bol
;
OPR_ARITHMETIQUE:mc_plus 
                 |mc_moins 
                 |mc_mult 
                 |mc_div {strcpy(opr_temp, $1);}
;
OPR_LOGIQUE:mc_and
            |mc_or
;
OPR_COMPARAISON:sup
                |inf
                |supe
                |infe
                |egal 
                |dif
;
FIN_INST:mc_inf mc_div mc_body mc_sup
;
//fin du programme-----------------------
FIN_PRG:mc_inf mc_div mc_docprogram mc_sup
;
%%
main()
{
       yyparse();
       afficher();
}
yywrap() {}
yyerror(char*msg)
{
   printf("erreur syntaxique a la ligne %d sur l'entite %s\n",nb_ligne,yytext);
}
