

#ifndef CADRAN_H
#define CADRAN_H

#include <ncurses.h>

class Cadran {
public:
    Cadran(const int _posX=1,const int _posY=1,const int _hauteur=1,const int _largeur=10);
    virtual ~Cadran();
    void Afficher(const char *texte);
    void Afficher(const int valeur);
    void Effacer();
    
private:
    int posX;
    int posY;
    int hauteur;
    int largeur;

};

#endif /* CADRAN_H */
