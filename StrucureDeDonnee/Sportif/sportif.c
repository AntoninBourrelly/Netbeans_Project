/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "sportif.h"

adherent *creerAdherent(adherent *unAdherent) {
    
    int indice;

    unAdherent = (adherent *) malloc(1 * sizeof (adherent));
    printf("Donnez le nom : \n");
    scanf("%s", unAdherent -> nom);
    printf("Donnez le prenom : \n");
    scanf("%s", unAdherent -> prenom);
    printf("Donnez le n° de licence : \n");
    scanf("%s", unAdherent -> IDCompose);
    printf("Donnez l'activité : \n");
    for(indice=0; indice <=5; indice++){
        printf("%d\t%s",indice ,activite[indice]);
    }
    scanf("%u", &unAdherent -> IDActivite);

    return unAdherent;
}

void afficherAdherent(adherent *unAdherent) {
    printf("Adherent :%s %s\tIdentifiant :%s\t\tActivité :",
            unAdherent->prenom,
            unAdherent->nom,
            unAdherent->IDCompose);
    
    switch (unAdherent->IDActivite) {
        
        case NATATION:
            printf("Natation");
            break;

        case HANDBALL:
            printf("Handball");
            break;

        case AVIRON:
            printf("Aviron");
            break;

        case TENNIS:
            printf("Tennis");
            break;

        case ATHLETISME:
            printf("Athletisme");
            break;

        default:
            printf("Activité inconnue \n");
    }
}