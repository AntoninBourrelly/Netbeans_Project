/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   sport.h
 * Author: tcorbin
 *
 * Created on 10 décembre 2018, 10:16
 */

#ifndef SPORT_H
#define SPORT_H

#include <stdio.h>
#include <stdlib.h>

#define NBMAXSPORTS 5
#define MAX 255

typedef enum{ NATATION, ATHLETISME, BASKET, AVIRON, TENNIS}sports;

typedef struct
{
    unsigned int jour;
    unsigned int mois;
    unsigned int annee;
    
}typeDate;

typedef struct
{
    char nom[MAX];
    char prenom[MAX];
    typeDate Date;
    int nbdiscipline;
    sports idActivite[NBMAXSPORTS];
    char identifiant[11];
    
  ;
}typeAdherent;

typeAdherent *creerAdherent();
void afficherAderent(typeAdherent *unAdherent);
void afficherMenu ();
void afficherDate(typeDate date);
void afficherActivite(sports activite);
void afficherUnAdherent(typeAdherent *ad);
#endif /* SPORT_H */

