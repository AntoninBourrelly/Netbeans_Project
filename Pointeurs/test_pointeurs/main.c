/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: abourrelly
 *
 * Created on 5 décembre 2018, 10:37
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int A = 10;
    int *P1 = NULL; // déclaration et initialisation d'un pointeur
    P1 = &A; //p prend pour valeur l'adresse de A
    int B;

    B = *P1; // B prend pour valeur le contenu addressé par p
    int *P2 = NULL; // déclaration d'un deuxième pointeur
    P2 = P1;
    printf("%p: %d\n\n", P2, *P2);

    printf("adresse de A: %p\n", &A);
    printf("P1: %p\n", P1);
    printf("B: %d\n", B);

    return (EXIT_SUCCESS);
}

