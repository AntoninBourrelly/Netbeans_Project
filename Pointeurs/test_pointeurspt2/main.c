/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: abourrelly
 *
 * Created on 5 décembre 2018, 11:10
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    char phrase[255] = "HEEEEYYYY Salut a tous les amis, c'est Davidlafarge Pokemon !";
    
    char *ptr = NULL;
    ptr = phrase;
    int cpt = 0;
    
    do {
        printf("%c", *ptr);
    ptr++;
    cpt++;
    }while(*ptr!='\0');
    printf("\nLe compteur de lettres contient: %d", cpt);
  
    
    return (EXIT_SUCCESS);
}

