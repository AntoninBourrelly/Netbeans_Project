/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   panneau.h
 * Author: abourrelly
 *
 * Created on 3 décembre 2018, 08:35
 */
#include <stdio.h>
#include <stdlib.h>


#ifndef PANNEAU_H
#define PANNEAU_H
#define TAILLEMAX 350

typedef struct{
    
    char typeBois[TAILLEMAX];
    unsigned int largeur;
    unsigned int longueur;
    unsigned int epaisseur;
    
} panneau;

panneau CreerPanneau();
void AfficherPanneau(panneau);
float CalculerVolume(panneau);



panneau *CreerPanneauPtr();
void AfficherPanneauPtr(panneau *);
#endif /* PANNEAU_H */

