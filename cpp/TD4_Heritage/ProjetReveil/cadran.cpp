/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cadran.cpp
 * Author: philippe
 * 
 * Created on 31 décembre 2018, 16:09
 */

#include "cadran.h"

Cadran::Cadran(const int _posX, const int _posY, const int _hauteur, const int _largeur) :
posX(_posX),
posY(_posY),
hauteur(_hauteur),
largeur(_largeur) 
{
    initscr();
    keypad(stdscr, TRUE);
    noecho();
    mvaddch(posY, posX, '+');
    mvaddch(posY, posX + largeur + 1, '+');
    mvaddch(posY + hauteur + 1, posX, '+');
    mvaddch(posY + hauteur + 1, posX + largeur + 1, '+');
    mvhline(posY, posX + 1, '-', largeur);
    mvhline(posY + hauteur + 1, posX + 1, '-', largeur);
    mvvline(posY + 1, posX, '|', hauteur);
    mvvline(posY + 1, posX + largeur + 1, '|', hauteur);
    curs_set(0);
    refresh();
}

Cadran::~Cadran() 
{
    endwin();
}

void Cadran::Afficher(const char *texte, const int position) 
{
    mvprintw(posY + 1, posX + position + 1, texte);
    refresh();
}

void Cadran::Afficher(const int valeur, const int position) 
{
    char *texte = new char[largeur + 1];
    if (texte != NULL) 
    {
        sprintf(texte,"%02d",valeur);
        Afficher(texte, position);
        delete texte;
    }
}

void Cadran::Effacer() 
{
    mvhline(posY + 1, posX + 1, ' ', largeur);
    refresh();
}
