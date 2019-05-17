/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cadran.h
 * Author: abourrelly
 *
 * Created on 17 janvier 2019, 11:13
 */

#ifndef CADRAN_H
#define CADRAN_H

#include <ncurses.h>

class Cadran {
public:
    Cadran(const int _posX = 1, const int _posY = 1, const int _hauteur = 1, const int _largeur = 7);
    virtual ~Cadran();
    void Afficher(const char *texte, const int position);
    void Afficher(const int valeur, const int position);
    void Effacer();

private:
    int posX;
    int posY;
    int hauteur;
    int largeur;

};

#endif /* CADRAN_H */

