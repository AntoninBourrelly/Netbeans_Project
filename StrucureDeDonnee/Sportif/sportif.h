/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   sportif.h
 * Author: abourrelly
 *
 * Created on 3 décembre 2018, 10:36
 */

#ifndef SPORTIF_H
#define SPORTIF_H
#define LONG 255

typedef enum{NATATION, HANDBALL, AVIRON, TENNIS, ATHLETISME} activite;


typedef struct{
    
    char nom[LONG];
    char prenom[LONG];
    char IDCompose[11];
    unsigned int IDActivite;
    activite activite;
    
}adherent;

adherent *creerAdherent();
void afficherAdherent(adherent *);

#endif /* SPORTIF_H */

