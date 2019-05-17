/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, cho_ose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CompteCourant.cpp
 * Author: mcoeurjoly
 * 
 * Created on 28 janvier 2019, 10:41
 */

#include "CompteCourant.h"
using namespace std;
#include <cstdlib>
#include <iostream>
CompteCourant::CompteCourant() :
decouvertAutorise(20) {
    cout << "Constructeur classe CompteCourant" << endl;
}

CompteCourant::~CompteCourant() {
    cout << "Destructeur classe CompteCourant" << endl;
}

void CompteCourant::ChangerDecouvert(double _nouveauDecouvert) {
    decouvertAutorise = _nouveauDecouvert;

}

// Surcharge de la méthode Retirer

bool CompteCourant::Retirer(double retrait) {
    bool retour;
    if (solde + decouvertAutorise >= retrait) {
        retour = true;
        solde = solde - retrait;
    } else {
        retour = false;
    }
    return retour;
}