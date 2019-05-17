#include "Cadran.h"

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

void Cadran::Afficher(const char *texte) 
{
    mvprintw(posY + 1, posX + 1 + 1, texte);
    refresh();
}

void Cadran::Afficher(const int valeur) 
{
    char *texte = new char[largeur + 1];
    if (texte != NULL) 
    {
        sprintf(texte,"%02d",valeur);// à compléter
        Afficher(texte);
        delete texte;
    }
}

void Cadran::Effacer() 
{
    mvhline(posY + 1, posX + 1, ' ', largeur);
    refresh();
}
