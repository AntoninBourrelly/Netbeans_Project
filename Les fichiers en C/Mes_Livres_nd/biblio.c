/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "biblio.h"

void continuer(){
    printf(" Pour continuer appuyez sur une touche\n");
    getchar();
    getchar();
}

void afficherMenu(int nbLivres){
    printf("Que voulez-vous faire ?\n");

    if(nbLivres == 0)
    {
        printf(" a -> Ajouter une fiche livre\n");
        printf(" q -> Quitter\n\n");
    }
    else
    {
        printf(" a -> Ajouter une fiche livre\n");
        printf(" s -> Supprimer une fiche livre\n");
        printf(" m -> Modifier une fiche livre\n");
        printf(" v -> Voir le contenu d'une fiche livre\n");
        printf(" l -> Afficher le tableau des fiches\n");
        printf(" p -> Actualiser le prix des livres\n");
        printf(" r -> Rechercher un livre\n");
        printf(" t -> Calculer le prix du stock\n");
        printf(" q -> Quitter\n\n");
    }
printf("Votre choix : "); 
}

char cleISBN(char *codeISBN){
    int i;
    int somme=0;
    int reste=0;
    char *cle;
    for(i=0;i<12;i++){
        if(codeISBN[i]>=0 && codeISBN[i]<=9){
            somme += codeISBN[i]*(i+1);
        }
        
        reste = somme%11;
        if(reste==10){
            codeISBN[12] = 'X';
        }else{
            codeISBN[12] = reste;
        }
    }
    return codeISBN[i];
}

void actualiserPrix(double taxe1, double taxe2, double *prix){
    for(int i=0;prix[i]!='\0';i++){
        prix[i]= prix[i]*(1-(taxe1/100))*(1+(taxe2/100));
    }
}

void afficherGenre(typeGenre Untype){
    switch(Untype){
        case ROMAN:
            printf("Roman\n");
            break;
        case POLICIER :
            printf("Policier\n");
            break;
        case BD :
            printf("BD\n");
            break;
        case JEUNESSE :
            printf("Jeunesse\n");
            break;
        case LOISIRS :
            printf("Loisirs\n");
            break;
        case SCIENCES :
            printf("Sciences\n");
            break;
        default:
            printf("Inconnue");
    }
}

void afficherUnLivre(typeLivre *ptrLivre){
    if(ptrLivre != NULL){
        printf("%s\t%s\t%d\t%f\t%d\t", 
                ptrLivre->titre,
                ptrLivre->auteurs,
                ptrLivre->annee,
                ptrLivre->prix,
                ptrLivre->quantite
                );
        afficherGenre(ptrLivre->type[0]);
    }
}

typeLivre *creerUnLivre(){
    typeLivre *ptrLivre;
    
    ptrLivre = (typeLivre *)malloc(1* sizeof(typeLivre));
    printf("Donnez le titre : \n");
    scanf("%s", ptrLivre->titre );
    printf("Donnez le(s) auteur(s) : \n");
    scanf("%s", ptrLivre->auteurs );
    printf("Donnez l'année : \n");
    scanf("%d", &ptrLivre->annee); 
    
    printf("Donnez le genre du livre : \n");
    printf(" Roman : 0\n");
    printf(" Policier : 1\n");
    printf(" BD : 2\n");
    printf(" Jeunesse : 3\n");
    printf(" Loisirs : 4\n");
    printf(" Sciences : 5\n");
    scanf("%u", &ptrLivre->type[0] );
    
    /*printf("Donnez le prix du livre : \n");
    scanf("%f\t(€)", &ptrLivre->prix);*/
    
    printf("Donnez le code ISBN : \n");
    scanf("%s", ptrLivre->identifiant);
    printf("Donnez la quantité : \n");
    scanf("%d", &ptrLivre->quantite);
    
    
    printf("Le livre est ajouté.\n");
    continuer();
    return ptrLivre;
}

void afficherLivres(typeLivre *tab[ ], int nb){
    int i;
    for(i=0; i<nb; i++){
        afficherUnLivre(tab[i]);
    }
}

int codeLivre(typeLivre *li[], int nb){
    int codeSaisi;
    int indice;
    int indLivre = -1;

    printf("Indiquez le code ISBN du livre :\n");
    scanf("%d", &codeSaisi);
    getchar();

    for(indice=0; indice<nb; indice++){
        if (strcmp(codeSaisi,li[indice]->identifiant)){
            printf("Code ISBN %s trouvé , fiche n°%d\n", li[indice]->identifiant, indice);
            indLivre = indice;
        }
    }
    return indLivre;
}