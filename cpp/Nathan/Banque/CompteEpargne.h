/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CompteEpargne.h
 * Author: abourrelly
 *
 * Created on 31 janvier 2019, 10:45
 */

#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H

#include "CompteBancaire.h"

class CompteEpargne : public CompteBancaire {
public:
    CompteEpargne();
    ~CompteEpargne();
    void ChangerTaux(double _nouveauxTaux);
    double CalculerInterets();
    void CrediterInterets();

private:
    double tauxInterets;
};

#endif /* COMPTEEPARGNE_H */

