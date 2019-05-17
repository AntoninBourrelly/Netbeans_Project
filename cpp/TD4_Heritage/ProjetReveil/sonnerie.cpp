/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "sonnerie.h"

Sonnerie::Sonnerie(){
    leCadran2 = new Cadran(5,0);
}

Sonnerie::~Sonnerie(){
    delete leCadran2;
}

void Sonnerie::FaireSonner(){
    
    
}