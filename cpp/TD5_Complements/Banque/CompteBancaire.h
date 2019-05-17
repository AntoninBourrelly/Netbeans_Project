/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CompteBancaire.h
 * Author: abourrelly
 *
 * Created on 28 janvier 2019, 11:13
 */

#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H

class CompteBancaire {
public:
    CompteBancaire();
    ~CompteBancaire();
    void Deposer(double somme);
    bool Retirer(double retrait);
    double ObtenirSolde();

protected:
    double solde;

};

#endif /* COMPTEBANCAIRE_H */

