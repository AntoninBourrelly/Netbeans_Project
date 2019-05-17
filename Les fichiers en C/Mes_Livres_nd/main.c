/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: nderouelle
 *
 * Created on 14 janvier 2019, 08:10
 */

#include "biblio.h"
/*
 * 
 */
int main(int argc, char** argv) {
    /*char *code;
    int i=0;
    double tarif=24.9;
    
    printf("Saisir un code ISBN :\t");
    scanf("%s",code);
    cleISBN(code);
    printf("%s\n",code);
    
    
    actualiserPrix(5.5,19.6,&tarif);
    printf("%.2f\t(€)\n",tarif);*/
    
    typeLivre *tableau[MAX];
    int compteurLivres = 0;
    char choix;
    int i=0;
    do{
        system("clear");  // efface l'écran
        afficherMenu(compteurLivres);
        scanf(" %c", &choix);
        switch(choix){
            case 'a':
                tableau[compteurLivres]=creerUnLivre();
                compteurLivres++;
                break;
            case 's':
                break;
            case 'm':
                break;
            case 'v':
                printf("Numéro du livre : ");
                scanf("%d", &i);
                afficherUnLivre(tableau[i]);
                continuer();
                break;
            case 'l':
                afficherLivres(tableau,compteurLivres);
                continuer();
                break;
            case 'p':
                break;
            case 'r':
                break;
            case 't':
                break;
            case 'q':
                break;
        } 
    }
    while(choix != 'q');
    
    return (EXIT_SUCCESS);
}

