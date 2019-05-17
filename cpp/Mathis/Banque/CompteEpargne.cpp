/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CompteEpargne.cpp
 * Author: mcoeurj\o/ly
 * 
 * Created on 28 janvier 2019, 10:40
 */

#include "CompteEpargne.h"
using namespace std;
#include <cstdlib>
#include <iostream>
CompteEpargne::CompteEpargne() :
tauxInterets(5) {
    cout << "Constructeur classe CompteEpargne" << endl;
}

CompteEpargne::~CompteEpargne() {
    cout << "Destructeur classe CompteEpargne" << endl;
}

void CompteEpargne::ChangerTaux(double _nouveauTaux) {
    tauxInterets = _nouveauTaux;
}

double CompteEpargne::CalculerInterets() {
    double interets;
    interets = tauxInterets * solde / 100;
    return interets;
}

void CompteEpargne::CrediterInterets() {
    solde = solde + CalculerInterets();
}
