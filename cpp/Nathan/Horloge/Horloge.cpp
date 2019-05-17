/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Horloge.h"

Horloge::Horloge(short _nbMode, short _resolution):
nbModes(_nbMode),
resolution(_resolution)
{
    leCadran = new Cadran(5,5);
    leClavier = new Clavier;
    valAvant = time(NULL);
}

Horloge::~Horloge(){
    delete leCadran;
    delete leClavier;
}

bool Horloge::AvancerHeures(){
    bool retour=0;
    heures++;
    if(resolution==24){
        if(heures==24){
            heures=0;
            retour=1;
        }
    }else{
        if(heures>12){
            heures = 1;
            retour=1;
        }
    }
    return retour;
}

bool Horloge::AvancerMinutes(){
    bool retour=0;
    minutes++;
    if(minutes==60){
        minutes=0;
        retour=1;
    }
    return retour;
}

void Horloge::ReculerHeures(){
    heures--;
    if (heures == -1) {
        heures = resolution - 1;
    }
}

void Horloge::ReculerMinutes(){
    minutes--;
    if (minutes == -1) {
        heures--;
        minutes = 59;
    }
}

void Horloge::ActualiserHeure(){
    time_t valCourante = time(NULL);
    double seconde = difftime(valCourante,valAvant);
    
    if(seconde>60){ // à modifier pour aller plus vite pendant le test (60 de base)
        valAvant = valCourante;
        if(AvancerMinutes()){
            AvancerHeures();
        }
    }
}

void Horloge::ChangerMode(){
    mode = (mode+1) % nbModes;
}

TOUCHES_CLAVIER Horloge::Controler(const TOUCHES_CLAVIER _numTouche){
    
    switch(mode){
        case AUCUN_REGLAGE:
            ActualiserHeure();
            leCadran->Afficher(heures,1);
            leCadran->Afficher(minutes,4);
            if(_numTouche==MODE){
                ChangerMode();
            }
            break;
        case REGLAGE_HEURES:
            switch(_numTouche){
                case PLUS:
                    AvancerHeures();
                    break;
                case MOINS:
                    ReculerHeures();
                    break;
            }
            leCadran->Afficher("HH",1);
            leCadran->Afficher(heures,4);
            if(_numTouche==MODE){
                ChangerMode();
            }
            break;
        case REGLAGE_MINUTE:
            switch(_numTouche){
                case PLUS:
                    AvancerMinutes();
                    break;
                case MOINS:
                    ReculerMinutes();
                    break;
            }
            leCadran->Afficher("MM",1);
            leCadran->Afficher(minutes,4);
            if(_numTouche==MODE){
                ChangerMode();
            }
            break;
    }
    return leClavier->ScruterClavier();
}