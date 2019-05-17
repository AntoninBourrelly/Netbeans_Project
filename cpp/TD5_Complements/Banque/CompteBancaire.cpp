/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "CompteBancaire.h"
#include <iostream>

using namespace std;

CompteBancaire::CompteBancaire() {
    cout << " Constructeur CompteBancaire" << endl ;
    solde = 0;
}

CompteBancaire::~CompteBancaire() {

}

void CompteBancaire::Deposer(double somme) {
    solde += somme;
}

bool CompteBancaire::Retirer(double retrait) {
    bool retour;

    if (retrait <= solde) {
        solde -= retrait;
        retour = true;
    }
    else {
        retour = false;
    }


    return retour;
}

double CompteBancaire::ObtenirSolde() {
    return solde;
}