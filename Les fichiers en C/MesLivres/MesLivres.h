/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MesLivres.h
 * Author: tcorbin
 *
 * Created on 14 janvier 2019, 08:14
 */

#ifndef MESLIVRES_H
#define MESLIVRES_H
#include <math.h>
#include <string.h>
#define IDMAX 13
#define INFOLIVREMAX 100
#define NBGENREMAX 6
#define NBLIVREMAX 5000


typedef enum {
    ROMAN, POLICIER, BD, JEUNESSE, LOISIRS, SCIENCES
}TypeGenre;

typedef struct {
    char titre;
    char auteur;
    int anne;
    TypeGenre Type[6];
    float prix;
    char ID;
    int quantite;
}TypeLivre;



char cleISBN(char *codeISBN);
int verificationISBN(char *codeISBN);
void actualiserPrix(double taxe1, double taxe2, double *prix);
void AfficherMenu();
void afficherUnLivre(TypeLivre *ptrLivre);
void afficherGenre(TypeGenre livre);
TypeLivre *creerUnLivre(); 

#endif /* MESLIVRES_H */

