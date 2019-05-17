/*
 * To change this license header, cho_ose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CompteCourant.h
 * Author: mcoeurjoly
 * Ya pas de smiley ici ;) 
 * Created on 28 janvier 2019, 10:41
 */

#ifndef COMPTECOURANT_H
#define COMPTECOURANT_H

#include "CompteBancaire.h"

class CompteCourant: public CompteBancaire { // CompteCourant hérite de CompteBancaire (le ":")
public:
    CompteCourant();
    virtual ~CompteCourant();
    void ChangerDecouvert(double _nouveauDecouvert);
    bool Retirer(double retrait); // Surcharge de la méthode retirer
private:
    double decouvertAutorise;
};

#endif /* COMPTECOURANT_H */

