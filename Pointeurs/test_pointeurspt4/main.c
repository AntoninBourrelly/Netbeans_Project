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
    int tab[10] = {0,1,2,3,4,5,6,7,8,9};
    int *p = NULL;
    int *q = NULL;
    q = tab;
    p = q;
    p++;
    *p = 10;
    
    
    for (int i=0; i<10; i++){
        printf("tab[%d] : %d\n", i, *q);
        q++;
    }
    
 
    return (EXIT_SUCCESS);
}

