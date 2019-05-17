/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: abourrelly
 *
 * Created on 3 décembre 2018, 08:34
 */

#include <stdio.h>
#include <stdlib.h>
#include "panneau.h"

/*
 * 
 */
int main(int argc, char** argv) {
    panneau unPanneau;
    panneau *unAutrePanneau;
    
    unPanneau = CreerPanneau(); //Constructeur
    AfficherPanneau(unPanneau); //Methode
    
    
    unAutrePanneau = CreerPanneauPtr(); //Constructeur
    AfficherPanneauPtr(unAutrePanneau); //Methode
    
    printf("\n Le volume est : %u", CalculerVolume(unPanneau));
    
    return (EXIT_SUCCESS);
}

