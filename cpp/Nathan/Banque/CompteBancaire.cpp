/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CompteBancaire.cpp
 * Author: nderouelle
 * 
 * Created on 28 janvier 2019, 10:57
 */

#include "CompteBancaire.h"

using namespace std;

CompteBancaire::CompteBancaire(const double solde) {
    cout << "1 - Déposer" << endl;
    cout << "2 - Retirer" << endl;
    cout << "3 - Solde" << endl;
    cout << "4 - Quitter" << endl;
    cout << endl << "Votre choix :";
}

CompteBancaire::~CompteBancaire() {
}

void CompteBancaire::Deposer(double somme){
    solde += somme;
}

bool CompteBancaire::Retirer(double retrait){
    bool retour;
    if(solde > retrait){
        retour = 1;
    }else{
        retour = 0;
    }
    return retour;
}

double CompteBancaire::ObtenirSolde(){
    return solde;
}
