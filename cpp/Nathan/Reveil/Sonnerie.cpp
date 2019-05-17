/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Sonnerie.h"

Sonnerie::Sonnerie(){
    leCadran2 = new Cadran(10,10);
}

Sonnerie::~Sonnerie(){
    delete leCadran2;
}

void Sonnerie::FaireSonner(){
    if(heures==heuresAlarme && minutes==minutesAlarme){
        leCadran2->Afficher("ALARME",1);
    }
}