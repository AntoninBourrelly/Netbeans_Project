/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: nderouelle
 *
 * Created on 16 janvier 2019, 10:20
 */

#include "biblioLivre.h"

/*
 * 
 */
int main(int argc, char** argv) {
    
    double prix = 24.9;
    actualiserPrix(5.5,19.6,&prix);
    
    printf("%lf\n",prix);
    
    return (EXIT_SUCCESS);
}

