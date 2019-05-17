/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "CompteEpargne.h"

CompteEpargne::CompteEpargne() {

    tauxInterets = 1.1;
}

CompteEpargne::~CompteEpargne() {

}

double CompteEpargne::CalculerInterets() {
    double interets;
    solde = (tauxInterets * solde) / 100;

    return interets;
}

void CompteEpargne::ChangerTaux(double nouveauxTaux) {
    tauxInterets = nouveauxTaux;
}

void CompteEpargne::CrediterInterets() {
    solde = solde * tauxInterets;
}
