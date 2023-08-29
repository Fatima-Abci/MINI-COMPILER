#include <stdio.h>
#include <stdlib.h>

//Table de symbole
//############################################### Dynamique ##############################################
struct node{
    char NomEntite[20];
    char CodeEntite[20];
    char TypeEntite[20];
    char Const[20];
    char Val[20];
    int TailleTab;
    struct node* next;
};

struct node* head = NULL;
struct node* current_ptr = NULL;

//fonction recherche
struct node* recherche(char entite[])
{
    struct node* loop_ptr = NULL;
    loop_ptr = head;
    while(loop_ptr != NULL)
    {
        if(strcmp(entite, loop_ptr->NomEntite)==0)
        {
            return loop_ptr;
        }
        loop_ptr = loop_ptr->next;
    }
    return NULL;
}

//définir la fonction inserer
void inserer(char entite[],char code[])
{
    struct node* ptr = NULL;
    if(recherche(entite)==NULL) 
    {
        if(head==NULL) //initialisation de la liste (TS)
        {
            head = (struct node*)malloc(sizeof(struct node));
            strcpy(head->NomEntite, entite);
            strcpy(head->CodeEntite, code);
            strcpy(head->Const, "non");
            strcpy(head->Val, "");
            head->TailleTab = -1;
            head->next = NULL;
            current_ptr = head;
        }
        else{
            ptr = (struct node*)malloc(sizeof(struct node));
            strcpy(ptr->NomEntite, entite);
            strcpy(ptr->CodeEntite, code);
            strcpy(ptr->Const, "non");
            strcpy(ptr->Val, "");
            ptr->TailleTab = -1;
            ptr->next = NULL;
            current_ptr->next = ptr;
            current_ptr = ptr;
        }
    }
}

//définir la fonction pour inserer le type d'un idf
void insererTYPE(char entite[],char type[])
{
    struct node* ptr = NULL;
    ptr = recherche(entite);
    if(ptr!=NULL)
    {
        strcpy(ptr->TypeEntite, type);
    }
}

//définir une fonction qui détecte la double déclaration et la non déclaration d'un idf
int declaration (char entite[])
{
    struct node* ptr = NULL;
    ptr = recherche(entite);
    if(ptr!=NULL)
    {
        if(strcmp(ptr->TypeEntite, "")==0)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }    
}

// définir la fonction ConstanteTrue (met le champ Const à vrai)
void ConstanteTrue(char entite[])
{
    struct node* ptr = NULL;
    ptr = recherche(entite);
    if(ptr!=NULL)
    {
        strcpy(ptr->Const, "oui");
    } 
}

//définir la fonction insererConstanteVal
void insererConstanteVal(char entite[], char val[])
{
    struct node* ptr = NULL;
    ptr = recherche(entite);
    if(ptr!=NULL)
    {
        strcpy(ptr->Val, val);
    } 
}

// définir la fonction isConstante (vérifie si un idf est une constante ou non)
int isConstante(char entite[])
{
    struct node* ptr = NULL;
    ptr = recherche(entite);
    if(ptr!=NULL)
    {
        if(strcmp(ptr->Const, "oui")==0)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    } 
}

//définir la fonction ConstanteVal (retourne -1 si la constante possède déjà une valeur, 1 sinon)
int ConstanteVal(char entite[])
{
    struct node* ptr = NULL;
    ptr = recherche(entite);
    if(ptr!=NULL)
    {
            if(strcmp(ptr->Val, "") == 0)  
            {
                return 1;
            } 
            else
            {
                return -1;
            }
    } 
}

// définir la fonction TailleTab (sauvegarder la taille d'un tableau)
void sauvTailleTab(char entite[],int t)
{
    struct node* ptr = NULL;
    ptr = recherche(entite);
    if(ptr!=NULL)
    {
        ptr->TailleTab = t;
    } 
}

//définir la fonction  tailleMaxTab (retourne la taille du tab)
int tailleMaxTab(char entite[])
{
    struct node* ptr = NULL;
    ptr = recherche(entite);
    if(ptr!=NULL)
    {
        return ptr->TailleTab;
    } 
}

//fonction qui vérifie si le format est compatible avec le type de l'idf
int FormatageInOut(char entite[],char format)
{
    struct node* ptr = NULL;
    ptr = recherche(entite);
    if(ptr!=NULL)
    {
        if(strcmp(ptr->TypeEntite,"INT")==0)
        {
                if(format == '$')
                    return 1;
                else 
                    return -1;
        }
        if(strcmp(ptr->TypeEntite,"FLT")==0)
        {
                if(format == '%')
                    return 1;
                else 
                    return -1;        
        }
        if(strcmp(ptr->TypeEntite,"STR")==0)
        {
                if(format == '#')
                    return 1;
                else 
                    return -1;       
        }
        if(strcmp(ptr->TypeEntite,"CHR")==0)
        {
                if(format == '&')
                    return 1;
                else 
                    return -1;       
        }
        if(strcmp(ptr->TypeEntite,"BOL")==0)
        {
                if(format == '@')
                    return 1;
                else 
                    return -1;       
        }
    } 
}

// respect du signe de formatage 
int SigneFormatageInOut(char entite[], char chaine[])
{
    struct node* ptr = NULL;
    ptr = recherche(entite);
    int i = 0;
    int m = strlen(chaine);
    if(ptr!=NULL)
    {
        while (i < m)
        {
            if(chaine[i] == '$')
            {
                return FormatageInOut(entite,'$');
            }
            if(chaine[i] == '%')
            {
                return FormatageInOut(entite,'%');
            }
            if(chaine[i] == '#')
            {
                return FormatageInOut(entite,'#');
            }
            if(chaine[i] == '&')
            {
                return FormatageInOut(entite,'&');
            }
            if(chaine[i] == '@')
            {
                return FormatageInOut(entite,'@');
            }
            i++;
        }
    } 
    return 0;
}


//afficher la table de symbole
void afficher()
{
    struct node* ptr = NULL;
    printf("\n");
    printf("\n                  ##################### Table des symboles #####################\n");
    printf("________________________________________________________________________________________________________________\n");
    printf("\t NomEntite      |   CodeEntite   |   TypeEntite  |   Constante   |   Valeur        |   TailleTab \n");    
    printf("_________________________________________________________________________________________________________________\n");
    ptr = head;
    while(ptr!=NULL)
    {
        printf("\t%15s |%15s | %13s | %13s | %15s | %12d \n",ptr->NomEntite,ptr->CodeEntite,ptr->TypeEntite,ptr->Const,ptr->Val,ptr->TailleTab);
        ptr = ptr->next;
    }
} 
