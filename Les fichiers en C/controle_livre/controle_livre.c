#include "controle_livre.h"
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define ID 13
#define CHARMAX 100
#define LIVREMAX 5000

char cleISBN(char *codeISBN) {

    int cle;
    int longueur;
    int indice;
    char caractere;
    int coefficient = 1;
    int somme = 0;
    int reste;


    longueur = strlen(codeISBN);

    for (indice = 0; indice < longueur; indice++) {
        caractere = codeISBN[indice];
        if (caractere != '-') {
            printf("%d", caractere - 48);
            somme = somme + ((caractere - 48) * coefficient);
            coefficient++;
        }
    }

    printf("\nSomme: %d\n", somme);
    reste = somme % 11;
    printf("Reste de la division: %d\n", reste);

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

/*
int main() {
    printf("%c\n", cleISBN("2-225-80068"));
    printf("%d\n", verificationISBN("2-101-48491-5"));
    printf("%d\n", verificationISBN("2-266-11156-6"));

    return 0;
}
 */


void actualiserPrix(double taxe1, double taxe2, double *prix) {

    taxe1 = 5.5 / 100;
    taxe2 = 19.6 / 100;
    *prix = 24.9;

    double prixSansTaxes;
    double nouveauPrix;

    prixSansTaxes = *prix - *prix * taxe1;
    printf("prix sans taxes: %f\n", prixSansTaxes);

    nouveauPrix = prixSansTaxes + prixSansTaxes * taxe2;
    printf("nouveau prix: %f\n", nouveauPrix);

}

/*int main() {

    double tarif = 24.9;
    actualiserPrix(5.5, 19.6, &tarif);
    printf("%.2f\n", tarif);

    return 0;
}*/

void afficherMenu() {

    typeLivre * livre[LIVREMAX];

    int compteurLivre = 0;
    int indLivre;
    char choix;
    do {

        printf("\t\ta: Ajouter une fiche livre\n");
        if (compteurLivre != 0) {
            printf("\t\ts: Supprimer une fiche livre\n");
            printf("\t\tm: Modifier une fiche livre\n");
            printf("\t\tv: Voir le contenu d'une fiche livre\n");
            printf("\t\tl: afficher le tableau des fiches\n");
            printf("\t\tp: Actualiser le prix des livres\n");
            printf("\t\tr: Rechercher un livre\n");
            printf("\t\tt: Calculer le prix du stock\n");
        }
        printf("\t\tq: Quitter\n");
        scanf("%c\n", &choix);
        getchar();
        switch (choix) {
            case 'a':
                system("clear");
                printf("\t\t Ajouter une fiche livre\n");
                compteurLivre = ajouterUnLivre(livre, compteurLivre);
                break;

            case 's':
                system("clear");
                printf("\t\t Supprimer une fiche livre\n");

                break;

            case 'm':
                system("clear");
                printf("\t\t Modifier une fiche livre\n");

                break;

            case 'v':
                system("clear");
                printf("\t\t Voir le contenu d'une fiche livre\n");

                break;

            case 'l':
                system("clear");
                printf("\t\t afficher le tableau des fiches\n");

                break;

            case 'p':
                system("clear");
                printf("\t\t Actualiser le prix des livres\n");

                break;

            case 'r':
                system("clear");
                printf("\t\t Rechercher un livre\n");

                break;

            case't':
                system("clear");
                printf("\t\t Calculer le prix du stock\n");
                
                break;

            case 'q':
                system("clear");
                printf("\t\t Quitter");
                printf("\n\n");
                break;

            default:
                system("clear");
                printf("Erreur de choix , recommencez : \n");
                printf("\n\n");
        }
    } while (choix != 'q');


}

void afficherUnLivre(typeLivre *ptrLivre) {

    printf("Titre: %s\n", &ptrLivre->titre);
    printf("Auteur: %s\n", &ptrLivre->auteurs);
    printf("Date de publication: %d\n", ptrLivre->annee);
    printf("Type: %u\n", ptrLivre->type);
    printf("Prix: %f\n", ptrLivre->prix);
    printf("Code ISBN: %s\n", &ptrLivre->identifiant);
    printf("Quantité: %d", ptrLivre->quantite);
}

typeLivre *creerUnLivre() {

    typeLivre *livre;
    livre = (typeLivre *) malloc(1 * sizeof (typeLivre));

    int retour = 0;

    printf("titre: \n");
    scanf("%s\n", &livre->titre);
    printf("auteurs : \n");
    scanf("%s\n", &livre->auteurs);
    printf("annee : \n");
    scanf("%d\n", &(livre->annee));
    printf("prix: \n");
    scanf("%f\n", (livre->prix));
    printf("genre: \n");
   // choisirGenre(livre, livre->type);
    scanf("%u\n", &(livre->type));

    do {
        printf("ISBN :\n");
        scanf("%s\n", &(livre->identifiant));
        retour = verificationISBN(livre->identifiant);
    } while (retour != 1);


    printf("quantite:\n");
    scanf("%d", &(livre->quantite));

    return livre;
}

/*void choisirGenre(typeLivre *ad, int type) {

    int choixGenre = 0;
    int indiceGenre;
    printf("Roman ---->1\n");
    printf("Policier-->2\n");
    printf("BD ------>3\n");
    printf("Jeunesse ------>4\n");
    printf("Loisirs ------>5\n");
    printf("Sciences ------>6\n");
    for (indiceGenre = 0; indiceGenre < type; indiceGenre++) {
        printf("choix sport n°%d: ", indiceGenre + 1);
        scanf("%d", &choixGenre);
        getchar();
        switch (choixGenre) {
            case 1:
                ad->type[indiceGenre] = Roman;
                break;
            case 2:
                ad->type[indiceGenre] = Policier;
                break;
            case 3:
                ad->type[indiceGenre] = BD;
                break;
            case 4:
                ad->type[indiceGenre] = Jeunesse;
                break;
            case 5:
                ad->type[indiceGenre] = Loisirs;
                break;
            case 6:
                ad->type[indiceGenre] = Sciences;
                break;
        }
    }
}
*/
int ajouterUnLivre(typeLivre * tab[ ], int nb) {
    tab[nb] = creerUnLivre();
    nb++;
    return nb;
}

void afficherLivres(typeLivre * tab[], int nb) {
    int indice;
    for (indice = 0; indice <= nb; indice++) {
        printf("Fiche Livre %d : \n", indice + 1);
        afficherUnLivre(tab[indice]);
    }
}

int supprimerUnLivre(typeLivre *tab[], int indLivre, int nb) {
    int indice;

    if (indLivre >= 0) {
        printf("Suppression de la fiche Livre n°%d\n", indLivre);
        free(tab[indLivre]);

        for (indice = indLivre; indice < nb - 1; indice++) {
            tab[indice] = tab[indice + 1];
        }
        nb--;
    }
    printf("Le nombre de fiches après suppression est de %d\n", nb);
    return nb;
}