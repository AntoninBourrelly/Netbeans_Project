/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Horloge.cpp
 * Author: jribeiro
 * 
 * Created on 17 janvier 2019, 10:43
 */

#include "Horloge.h"

Horloge::Horloge(const short _nbMode, const short _resolution) : heures(0), minutes(0), nbMode(_nbMode), resolution(_resolution), mode(AUCUN_REGLAGE) {
    leCadran = new Cadran(5, 5);
    leClavier = new Clavier;

    valAvant = time(NULL);
}

Horloge::~Horloge() {
    delete leCadran;
    delete leClavier;    
}

bool Horloge::AvancerHeures(){
    
}

bool Horloge::AvancerMinutes(){
    
}

void Horloge::ReculerHeures(){
    
}

void Horloge::ReculerMinutes(){
    
}

void Horloge::ActualiserHeure(){
    time_t valCourante=time(NULL);
}