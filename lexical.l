%{
#include "synt.tab.h"
extern nb_ligne;
extern YYSTYPE yylval;
#include "fonction.h"
#include "pgm.h"

%}
lettres [a-zA-Z]
chiffres [0-9]
entier "("[+-][1-9][0-9]*")"|0|[1-9][0-9]*
reel "("[+-]([1-9][0-9]*|0)"."{chiffres}+")"|([1-9][0-9]*|0)"."{chiffres}+
bol TRUE|FALSE
caractere \'{lettres}\' 
format $|%|#|&|@
chaine_caractere \"[^"$%#&@]*{format}?[^"$%#&@]*\"
idf {lettres}({lettres}|{chiffres}|_)*

%%
docprogram return mc_docprogram;
SUB return mc_sub;
VARIABLE return mc_variable;
AS return mc_as;
INT {   yylval.str = strdup(yytext);
        return mc_int;}
FLT {   yylval.str = strdup(yytext);
        return mc_flt;}
BOL {   yylval.str = strdup(yytext);
        return mc_bol;}
CHR {   yylval.str = strdup(yytext);
        return mc_chr;}
STR {   yylval.str = strdup(yytext);
        return mc_str;}
ARRAY return mc_arr;
CONSTANTE return mc_const;
body return mc_body;
AFF return mc_aff;
INPUT return mc_input;
OUTPUT return mc_output;
IF return mc_if;
THEN return mc_then;
ELSE return mc_else;
AND return mc_and;
OR return mc_or;
NOT return mc_not;
SUP return sup;
INF return inf;
SUPE return supe;
INFE return infe;
EGA return egal;
DIF return dif;
DO return mc_do;
WHILE return mc_while;
FOR return mc_for;
UNTIL return mc_until;
"(" return par_ov;
")" return par_fr;
"+" return mc_plus;
"-" return mc_moins;
"*" return mc_mult;
"," return vrg;
"=" return mc_egal;
":" return mc_dpts;
"|" return mc_barre;
";" return pvg;
"<" return mc_inf;
"!" return mc_pexcl;
">" return mc_sup;
"[" return cr_ov;
"]" return cr_fr;
"/" {   yylval.str=strdup(yytext);
        return mc_div;}
{entier} {  yylval.str=strdup(yytext);
            return cst_entier;}
{reel} {    yylval.str=strdup(yytext);
            return cst_reel;}
{bol} { yylval.str=strdup(yytext);
        return cst_bol;}
{caractere} { yylval.str=strdup(yytext);
              return cst_car;}
{chaine_caractere} { yylval.str=strdup(yytext);
                     return cst_chaine;}
{idf} { inserer(yytext,"idf"); 
        yylval.str=strdup(yytext);
        return idf;}
[ \t]
[\n] nb_ligne++;
. printf("erreur lexicale a la ligne %d sur l'entite %s\n",nb_ligne,yytext);
