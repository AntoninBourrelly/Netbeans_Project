#include <stdio.h>
#include <stdlib.h>
#include "Livres.h"
#define ID 13
#define CHARMAX 100
#define LIVREMAX 5000

/*
 * 
 */

int main(int argc, char** argv) {
    typeLivre * tableau[LIVREMAX];
    typeLivre *ptrLivre;
    int compteurLivre = 0;
    char choix;
    int i = 0;
    int id = 0;


    do {
        system("clear");
        afficherMenu(compteurLivre);
        scanf(" %c", &choix);

        switch (choix) {
            case 'a':
                system("clear");
                tableau[compteurLivre] = creerUnLivre(tableau, compteurLivre);
                compteurLivre++;
                break;

            case 's':

                continuer();
                break;

            case 'm':

                continuer();
                break;

            /*case 'v':
                afficherUnLivre(typeLivre * ptrLivre)
                continuer();
                break;
*/
            case 'l':
                afficherLivres(tableau, compteurLivre);
                continuer();
                break;


            case 'p':

                continuer();
                break;

            case 'r':

                continuer();
                break;

            case 't':
                continuer();
                break;

            default:
                break;

        }
    } while (choix != 'q');

    return (EXIT_SUCCESS);
}

