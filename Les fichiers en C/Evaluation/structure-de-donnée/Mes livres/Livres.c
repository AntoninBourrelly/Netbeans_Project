#include "Livres.h"
#include <stdio.h>
#include <math.h>
#include <string.h>
#define ID 13
#define CHARMAX 100
#define LIVREMAX 5000

char cleISBN(char *codeISBN) {

    int longueur;
    int indice;
    char caractere;
    int multiplicateur = 1;
    int somme = 0;
    int reste;
    int cle;

    longueur = strlen(codeISBN);

    for (indice = 0; indice < longueur; indice++) {
        caractere = codeISBN[indice];

        if (caractere != '-') {
            printf("%d", caractere - 48);
            somme = somme + ((caractere - 48) * multiplicateur);
            multiplicateur++;
        }
    }
    printf("\nSomme: %d\n", somme);
    reste = somme % 11;
    printf("Reste: %d\n", reste);
    if (reste == 10) {
        cle == 'X';
    } else {
        cle = reste + 48;
    }
    printf("La clé est: %c\n\n", cle);

    return cle;

}

int verificationISBN(char *codeISBN) {

    int cle;
    int longueur;
    int numFin;
    int retour;
    cle = cleISBN(codeISBN);
    longueur = strlen(codeISBN);
    numFin = codeISBN[longueur - 1];

    if (numFin == cle) {
        retour = 1;
    } else {
        retour = 0;
    }

    return retour;
}


/*int main() {
    printf("%c\n", cleISBN("2-225-80068"));
    printf("%d\n", verificationISBN("2-101-48491-5"));
    printf("%d\n", verificationISBN("2-266-11156-6"));

    return 0;
}*/
 


/*int main() {

    double tarif = 24.9;
    actualiserPrix(5.5, 19.6, &tarif);
    printf("%.2f\n", tarif);

    return 0;
}*/

void afficherMenu(int compteurLivres) {


    printf("Que voulez-vous faire ?\n");

    if (compteurLivres == 0) {
        printf(" a -> Ajouter une fiche livre\n");
        printf(" q -> Quitter\n\n");
    } else {
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

void afficherUnLivre(typeLivre *ptrLivre) {
    if (ptrLivre != NULL) {
        printf("%s\t%s\t%d\t%.2f\t%d\t",
                ptrLivre->titre,
                ptrLivre->auteurs,
                ptrLivre->annee,
                ptrLivre->prix,
                ptrLivre->quantite
                );
        afficherGenre(ptrLivre->type[0]);
    }
}

typeLivre *creerUnLivre() {
    typeLivre *ptrLivre;

    ptrLivre = (typeLivre *) malloc(1 * sizeof (typeLivre));
    printf("Donnez le titre : \n");
    scanf("%s", ptrLivre->titre);
    printf("Donnez le(s) auteur(s) : \n");
    scanf("%s", ptrLivre->auteurs);
    printf("Donnez l'année : \n");
    scanf("%d", &ptrLivre->annee);

    printf("Donnez le genre du livre : \n");
    printf(" Roman \t\t: 0\n");
    printf(" Policier \t: 1\n");
    printf(" BD \t\t: 2\n");
    printf(" Jeunesse \t: 3\n");
    printf(" Loisirs \t: 4\n");
    printf(" Sciences \t: 5\n");
    scanf("%u", &ptrLivre->type[0]);

    printf("Donnez le prix du livre : \n");
    scanf("%f", &ptrLivre->prix);

    printf("Donnez le code ISBN : \n");
    scanf("%s", ptrLivre->identifiant);
    printf("Donnez la quantité : \n");
    scanf("%d", &ptrLivre->quantite);


    printf("Le livre est ajouté.\n");
    continuer();
    return ptrLivre;
}

void continuer() {
    printf(" Pour continuer appuyez sur une touche\n");
    getchar();
    getchar();
}

void afficherLivres(typeLivre *tab[ ], int nb) {
    int i;
    for (i = 0; i < nb; i++) {
        afficherUnLivre(tab[i]);
    }
}

void actualiserPrix(double taxe1, double taxe2, double *prix) {
    for (int i = 0; prix[i] != '\0'; i++) {
        prix[i] = prix[i]*(1 - (taxe1 / 100))*(1 + (taxe2 / 100));
    }
}

int rechercherNumAdherent(typeLivre *tab[], int nb){
    unsigned int numSaisi;
    int i;
    int indLivre = -1;

    printf("Indiquez l'ISBN\n");
    scanf("%u", &numSaisi);
    getchar();

    for (i = 0; i < nb; i++) {
        if (numSaisi == (tab[i]->identifiant)) {
            printf("Fiche n°%d\n",  i );
            indLivre = i;
        }
    }
    return indLivre;
}