/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CompteBancaire.h
 * Author: nderouelle
 *
 * Created on 28 janvier 2019, 10:57
 */

#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H

#include <iostream>
#include <cstdlib>

class CompteBancaire {
public:
    CompteBancaire(const double solde = 0);
    virtual ~CompteBancaire();
    void Deposer(double somme);
    bool Retirer(double retrait);
    double ObtenirSolde();
    
protected:
    double solde;
};

#endif /* COMPTEBANCAIRE_H */

