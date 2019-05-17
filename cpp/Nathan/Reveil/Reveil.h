/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Reveil.h
 * Author: nderouelle
 *
 * Created on 24 janvier 2019, 08:58
 */

#ifndef REVEIL_H
#define REVEIL_H
#include "Horloge.h"

enum MODE_REVEIL{
    ACTIVATION_ALARME=3,
    REGLAGE_HEURES_ALARME,
    REGLAGE_MINUTE_ALARME,
    AUCUN_REGLAGE_ALARME
    };

class Reveil : public Horloge{
public:
    Reveil(const short _nbMode=7, const short _resolution = 24);
    virtual ~Reveil();
    void AvancerHeuresAlarme();
    void AvancerMinutesAlarme();
    void ReculerHeuresAlarme();
    void ReculerMinutesAlarme();
    TOUCHES_CLAVIER Controler(TOUCHES_CLAVIER _numTouche=AUCUNE);
    short heuresAlarme;
    short minutesAlarme;
    bool alarme;
};

#endif /* REVEIL_H */

