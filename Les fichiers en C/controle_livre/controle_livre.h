/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   controle_livre.h
 * Author: jribeiro
 *
 * Created on 14 janvier 2019, 08:15
 */

#ifndef CONTROLE_LIVRE_H
#define CONTROLE_LIVRE_H
#define ID 13
#define CHARMAX 100
#define LIVREMAX 5000



#ifdef __cplusplus
extern "C" {
#endif

    typedef enum {
        Roman, Policier, BD, Jeunesse, Loisirs, Sciences
    } typeGenre;

    typedef struct {
        char titre;
        char auteurs;
        int annee;
        typeGenre type;
        float prix;
        char identifiant;
        int quantite;
    } typeLivre;


char cleISBN(char *codeISBN);
int verificationISBN(char *codeISBN);
void actualiserPrixPrix(double taxe1, double taxe2, double *prix);
void afficherMenu();
void afficherUnLivre(typeLivre *ptrLivre);
typeLivre *creerUnLivre();
int ajouterUnLivre(typeLivre *tab[ ], int nb);
void afficherLivres(typeLivre * tab[], int nb);


#ifdef __cplusplus
}
#endif

#endif /* CONTROLE_LIVRE_H */

