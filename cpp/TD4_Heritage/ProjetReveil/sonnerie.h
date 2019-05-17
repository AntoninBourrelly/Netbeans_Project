/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   sonnerie.h
 * Author: abourrelly
 *
 * Created on 28 janvier 2019, 08:39
 */

#ifndef SONNERIE_H
#define SONNERIE_H
#include "reveil.h"

class Sonnerie : public Reveil{
public:
    Sonnerie();
    ~Sonnerie();
    void FaireSonner();
    void ArreterAlarme();
    
protected:
    Cadran *leCadran2;
};
#endif /* SONNERIE_H */

