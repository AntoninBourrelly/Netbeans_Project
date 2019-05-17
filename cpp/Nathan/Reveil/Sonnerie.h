/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sonnerie.h
 * Author: nderouelle
 *
 * Created on 24 janvier 2019, 10:17
 */

#ifndef SONNERIE_H
#define SONNERIE_H
#include "Reveil.h"

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

