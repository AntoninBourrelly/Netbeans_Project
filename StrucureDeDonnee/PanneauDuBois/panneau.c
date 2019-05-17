
#include "panneau.h"

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
panneau CreerPanneau() {
    panneau MonPanneau;
    printf("Donnez la largeur : \n");
    scanf("%u", &MonPanneau.largeur);
    printf("Donnez la longueur : \n");
    scanf("%u", &MonPanneau.longueur);
    printf("Donnez l'épaisseur : \n");
    scanf("%u", &MonPanneau.epaisseur);
    printf("Donnez le type de bois : \n");
    scanf("%s", MonPanneau.typeBois);

    return MonPanneau;
}

void AfficherPanneau(panneau unPanneau) {
    printf("%s EP.%u mm x L.%u x l.%u mm\n",
            unPanneau.typeBois,
            unPanneau.epaisseur,
            unPanneau.largeur,
            unPanneau.longueur);
}

float CalculerVolume(panneau unPanneau){
    float volume;
    volume = unPanneau.epaisseur *
             unPanneau.largeur *
             unPanneau.longueur / 1000000000;
    
    return volume / 1e9;
}

panneau *CreerPanneauPtr() {
    panneau *MonPanneau;
    MonPanneau = (panneau *)malloc(1 * sizeof(panneau));
    printf("Donnez la largeur : \n");
    scanf("%d", &MonPanneau->largeur);
    printf("Donnez la longueur : \n");
    scanf("%d", &MonPanneau->longueur);
    printf("Donnez l'épaisseur : \n");
    scanf("%d", &MonPanneau->epaisseur);
    printf("Donnez le type de bois : \n");
    scanf("%s", MonPanneau->typeBois);

    return MonPanneau;
}

void AfficherPanneauPtr(panneau *unPanneau){
    printf("%s EP.%u mm x L.%u x l.%u mm\n",
            unPanneau->typeBois,
            unPanneau->epaisseur,
            unPanneau->largeur,
            unPanneau->longueur);
}