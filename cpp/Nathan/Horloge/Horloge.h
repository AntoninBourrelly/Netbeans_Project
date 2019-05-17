/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Horloge.h
 * Author: nderouelle
 *
 * Created on 17 janvier 2019, 10:50
 */

#ifndef HORLOGE_H
#define HORLOGE_H

#include <time.h>

#include "Cadran.h"
#include "Clavier.h"

enum TMODE
    {
    AUCUN_REGLAGE,
    REGLAGE_HEURES,
    REGLAGE_MINUTE
    };

class Horloge{
public:
    Horloge(short _nbMode=3, short _resolution=24);
    ~Horloge();
    bool AvancerHeures();
    bool AvancerMinutes();
    void ReculerHeures();
    void ReculerMinutes();
    void ActualiserHeure();
    void ChangerMode();
    TOUCHES_CLAVIER Controler(TOUCHES_CLAVIER _numTouche=AUCUNE);
    
private:
    short heures;
    short minutes;
    const short resolution;
    short mode;
    const short nbModes;
    time_t valAvant;
    Cadran *leCadran;
    Clavier *leClavier;
};

#endif /* HORLOGE_H */

