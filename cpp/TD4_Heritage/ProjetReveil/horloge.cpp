/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "horloge.h"

Horloge::Horloge(const short _nbMode, const short _resolution) :
heures(0), minutes(0), nbMode(_nbMode), resolution(_resolution), mode(AUCUN_REGLAGE) {
    leCadran = new Cadran(5, 5);
    leClavier = new Clavier;
    
    valAvant = time(NULL);
}

Horloge::~Horloge() {
    delete leCadran;
    delete leClavier;
}

bool Horloge::AvancerHeures() {
    int retour = false;
    heures++;
    if (resolution == 24) {
        if (heures == 24) {
            retour = true;
            heures = 0;
        }
    }
    if (resolution == 12) {
        if (heures == 12) {
            retour = true;
            heures = 0;
        }
    }
    return retour;
}

bool Horloge::AvancerMinutes() {
    int retour = false;
    minutes++;
    if (minutes == 60) {
        minutes =0;
        retour = true;
    }
    return retour;
}

void Horloge::ReculerHeures() {
    heures--;
    if (heures < 0) {
        heures = 23;
    }
}

void Horloge::ReculerMinutes() {
    minutes--;
    if (minutes < 0) {
        minutes = 59;
    }
}

void Horloge::ActualiserHeure() {
    time_t valCourante = time(NULL);
    double seconde = difftime(valCourante, valAvant);

    if (seconde > 2) {
        valAvant = valCourante;
        if (AvancerMinutes())
            AvancerHeures();
    }
}

void Horloge::ChangerMode(){
    mode = (mode + 1) % nbMode;
}
TOUCHES_CLAVIER Horloge::Controler (TOUCHES_CLAVIER numTouche){
    
        switch(mode){
        case AUCUN_REGLAGE:
            ActualiserHeure();
            leCadran->Afficher(heures,1);
            leCadran->Afficher(minutes,4);
            if(numTouche==MODE){
                ChangerMode();
            }
            break;
        case REGLAGE_HEURES:
            switch(numTouche){
                case PLUS:
                    AvancerHeures();
                    break;
                case MOINS:
                    ReculerHeures();
                    break;
            }
            leCadran->Afficher("HH",1);
            leCadran->Afficher(heures,4);
            if(numTouche==MODE){
                ChangerMode();
            }
            break;
        case REGLAGE_MINUTES:
            switch(numTouche){
                case PLUS:
                    AvancerMinutes();
                    break;
                case MOINS:
                    ReculerMinutes();
                    break;
            }
            leCadran->Afficher("MM",1);
            leCadran->Afficher(minutes,4);
            if(numTouche==MODE){
                ChangerMode();
            }
            break;
    }
    return leClavier ->ScruterClavier();
}