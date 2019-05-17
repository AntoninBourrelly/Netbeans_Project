/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: abourrelly
 *
 * Created on 3 décembre 2018, 10:35
 */

#include <stdio.h>
#include <stdlib.h>
#include "sportif.h"
#define MAXELEM 5000

/*
 * 
 */
int main(int argc, char** argv) {
    adherent * tableau[MAXELEM];
    char continuer = 'O';
    int i = 0;

    while (continuer == 'O') {
        tableau[i] = creerAdherent();
        afficherAdherent(tableau[i]);
        printf("\n\nVoulez vous continuer ? O/N ?\n");
        scanf(" %c",&continuer);
        i++;
    }

    return (EXIT_SUCCESS);
}

