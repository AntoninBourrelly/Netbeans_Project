/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tcorbin
 *
 * Created on 10 décembre 2018, 10:16
 */

#include <stdio.h>
#include <stdlib.h>
#include "sport.h"

#define MAXELEM 5000
/*
 * 
 */
int main(int argc, char** argv) 
{
    typeAdherent * tableau[MAXELEM];
    char continuer = 'O';
    int i = 0,j;
    afficherMenu();
    
    while (continuer == 'O') 
    {
        tableau[0] = creerAdherent();
        afficherAderent(tableau[0]);
        printf("\nVoulez-vous continuer ? O/N ");
        scanf(" %c",&continuer);
        i++;
    }
    
    for(j = 0; j < i; j++)
    {
        afficherAderent(tableau[j]);
    }
    
    return (EXIT_SUCCESS);
}

