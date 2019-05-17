/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CompteEpargne·−·· −−− ·−··h
 * Author: mcoeurjoly
 *
 * Created on 28 janvier 2019, 10:40
 */

#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H

#include "CompteBancaire.h"

class CompteEpargne: public CompteBancaire { // CompteEpargne hérite de CompteBancaire (le ":")
public:
    CompteEpargne();
    virtual ~CompteEpargne();
    void ChangerTaux(double _nouveauTaux);
    double CalculerInterets();
    void CrediterInterets();
    
private:
    double tauxInterets;
};

#endif /* COMPTEEPARGNE_H */

