/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   biblio.h
 * Author: nderouelle
 *
 * Created on 14 janvier 2019, 08:12
 */

#ifndef BIBLIO_H
#define BIBLIO_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <unistd.h>
#define MAX 5000
#define TAILLEMAX 100

typedef enum{ROMAN,POLICIER,BD,JEUNESSE,LOISIRS,SCIENCES}typeGenre;

typedef struct{
    char titre[TAILLEMAX];
    char auteurs[TAILLEMAX];
    int annee;
    typeGenre type[6];
    double prix;
    char identifiant[TAILLEMAX];
    int quantite;
}typeLivre;

void continuer();
void afficherMenu(int nbLivres);
char cleISBN(char *codeISBN);
void actualiserPrix(double taxe1, double taxe2, double *prix);
void afficherGenre(typeGenre type);
void afficherUnLivre(typeLivre *ptrLivre);
typeLivre *creerUnLivre();
void afficherLivres(typeLivre *tab[ ], int nb);

#endif /* BIBLIO_H */

