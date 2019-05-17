/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "MesLivres.h"


char cleISBN(char *codeISBN){
    int somme=0;
    int long;
    int n;
    char caractere;
    int multiplicateur = 1;
    int reste;
    char cle;
    
    
     long =strlen (codeISBN);

    printf("donner le code ISBN");
    scanf("%c",codeISBN);
    
    
    
     for (n=0; n<long-1 ;n++) {
        caractere = codeISBN[n];
        if (caractere != '-') {
            printf("%c,", caractere);
            somme = somme + ((caractere) * multiplicateur);
            multiplicateur++;
        }

    }
    printf("\nsomme :%d\n", somme);
    reste = somme % 11;
    printf("reste :%d\n", reste);
    if (reste == 10) {
        cle = 'X';
    } else {
        cle = reste ;
    }
    printf("la cle est :%c\n", cle);

    return cle;
    
}   

int verificationISBN(char *codeISBN) {

    char cle;
    int Fin;
    int longueur;
    int retour = 0;
    
    
    cle = cleISBN(codeISBN);
    longueur = strlen(codeISBN);
    Fin = codeISBN[longueur - 1];
    if (Fin == cle) {
        retour = 1;
    } else {
        retour = 0;
    }
    return retour;
}

 void actualiserPrix(double taxe1, double taxe2, double *prix){
     printf(" la valeur actuelle de la taxe sur les livres est de %2.lf", taxe1);
     printf(" la nouvelle valeur de la taxe sur les livres est de %2.lf", taxe2);
     printf(" le prix du livre est de %1f", prix);
     
     prix = prix * (1-(taxe1/100));
     prix = prix * (1+(taxe2/100));
     printf(" le nouveau est prix est %f" ,prix);
     
     
     
     
     
     
 }
 
 void AfficherMenu() {
    TypeLivre * livre[NBLIVREMAX];
    int compteurLivre = 0;
    int indLivre;
    char choix;

    do {
        printf("\n\t\t\t----Menu de gestion des livres----\n");
        printf("\n---->A : Ajouter une fiche livre\n");

        if (compteurLivre != 0) {
            printf("---->S : Supprimer une fiche livre\n");
            printf("---->M : Modifier une fiche livre\n");
            printf("---->V : Voir le contenu d'une fiche livre\n");
            printf("---->L : Voir le contenu de d'une fiche livre\n");
            printf("---->P : Actualiser le prix des livres\n");
            printf("---->R : Rechercher un livre\n");
            printf("---->T : Calculer le prix du stock\n");
            
        }
        printf("---->Q : Quitter\n");
        printf("------Indiquer votre choix: ");
        scanf("%c", &choix);
        getchar(); 

        switch (choix) {
            case 'A':
                system("clear");
               // printf("\n\t\t\t----Ajouter une fiche livre----\n\n");
               // compteurLivre = AjouterUnLivre(livre, compteurLivre);
                break;
            case 'S':
                system("clear");
                //printf("\n\t\t\t----Supprimer une fiche livre----\n\n");
                //indLivre = NumISBN(livre, compteurLivre);
               // if (indLivre >= 0) {
               //     compteurLivre = SupprimerUnLivre(livre, livre[indLivre]->identifiant, compteurLivre);
               // }
                break;
            case 'M':
               // system("clear");
                //indLivre = NumISBN(livre, compteurLivre);
                //if (indLivre >= 0) {
                //    ModifierUneFicheLivre(livre, indLivre);
               // } else {
                //    printf("\nPas de fiche avec ce numéro de licence");
               // }
                break;
            case'V':
                printf("\n\t\t\t----Voir le contenu d'une fiche----\n\n");
                /*indLivre = NumISBN(livre, compteurLivre);
                if (indLivre >= 0) {
                    AfficherUnLivre(livre[indLivre]);
                } else {
                    printf("\nPas de fiche avec ce numéro de licence");
                }*/
                break;
            case'L':
                //AfficherLivres(livre, compteurLivre);
                break;
            case'E':
                //printf("\n\t\t\t----Supprimer toutes les fiches----\n\n");
                //break;
            case'Q':
                printf("\n\t\t\t----Quitter----\n\n");
                break;
            default:
               printf("Erreur de choix, recommencez!");
               printf("\n\n");
               break;
        }

    } while (choix != 'Q');
}
 
 void afficherUnLivre(TypeLivre *ptrLivre){
     
     int n;
     printf("%c\n\r%c\n\r%d\n\r",
             ptrLivre->titre,
             ptrLivre->auteur,
             ptrLivre->anne);
     
     printf("\n\r");
     printf("%2.f\n\r%c\n\r%d\n\r",
             ptrLivre->prix,
             ptrLivre->ID,
             ptrLivre->quantite);
     
 }
 
 void afficherGenre(TypeGenre livre) {
    char *listeGenre[6] = {"ROMAN", "POLICIER", "BD", "JEUNESSE", "LOISIRS" ,"SCIENCES"};
    printf("%s", listeGenre[livre]);
}
 
 TypeLivre *creerUnLivre() {
    TypeLivre *livre;

    livre = (TypeLivre *) malloc(sizeof (TypeLivre));

    printf("---->Veuillez indiquer le titre du livre\n");
    printf("------Titre: ");
    scanf("%s", livre->titre);
    printf("---->Veuillez indiquer le / les auteur(s) du livre\n");
    printf("------Auteurs: ");
    scanf("%s", livre->auteur);
    printf("---->Veuillez indiquer l'année de publication du livre\n");
    printf("------Année:  ");
    scanf("%d", &livre->anne);
    
    do {
        printf("De quel genre est le livre ? : \n");
        printf("\nROMAN----> 1 \n");
        printf("POLICIER --> 2 \n");
        printf("BD ------> 3 \n");
        printf("JEUNESSE ------> 4 \n");
        printf("LOISIR ------> 5 \n");
        printf("SCIENCE ------> 6 \n");
        scanf("%u",&(livre->Type));
    } 
    
    printf("---->Veuillez indiquer le prix du livre\n");
    printf("------prix du Livre : ");
    scanf("%f", &(livre->prix));
    printf("---->Veuillez indiquer le numéro ISBN du livre\n");
    printf("------Numéro ISBN: ");
    scanf("%s", &(livre->ID));
    getchar();
    
    
    return livre;
}