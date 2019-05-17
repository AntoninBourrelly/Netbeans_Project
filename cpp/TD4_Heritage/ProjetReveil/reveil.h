/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   reveil.h
 * Author: abourrelly
 *
 * Created on 24 janvier 2019, 09:23
 */

#ifndef REVEIL_H
#define REVEIL_H
#include "horloge.h"

enum MODE_ALARME {
    ACTIVATION_ALARME=3,
    REGLAGE_HEURESALARME,
    REGLAGE_MINUTESALARME,
    AUCUN_REGLAGEALARME
};

class Reveil : public Horloge {
public:
    Reveil(const short _nbMode=7,const short _resolution = 24);
    virtual ~Reveil();
    void AvancerHeuresAlarme();
    void AvancerMinutesAlarme();
    void ReculerHeuresAlarme();
    void ReculerMinutesAlarme();
    TOUCHES_CLAVIER Controler(const TOUCHES_CLAVIER numTouche = AUCUNE);


protected:
    short heuresAlarme;
    short minutesAlarme;
    bool alarme;


};



#endif /* REVEIL_H */

