/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose
 */

/* 
 * File:   CompteBancaire.cpp
 * Author: mcoeurjoly
 * 
 * Created on 28 janvier 2019, 10:40
 */

#include "CompteBancaire.h"
#include <cstdlib>
#include <iostream>
using namespace std;

CompteBancaire::CompteBancaire(): solde(0) {
   cout << "Constructeur classe CompteBancaire" << endl;
}

CompteBancaire::~CompteBancaire() {
    cout << "Destructeur classe CompteBancaire" << endl;
}

void CompteBancaire::Deposer(double somme) {
    if (somme > 0) {
    solde = solde + somme;
    }
}

bool CompteBancaire::Retirer(double retrait) {
     bool retraitAcept = false;
    
    if (solde > retrait) {
        solde = solde - retrait;
        retraitAcept = true;
    }
    return retraitAcept;
}

double CompteBancaire::ObtenirSolde(){
    return solde;
}