/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "sonnerie.h"
#include "reveil.h"

Reveil::Reveil(short _nbMode, short _resolution) :
Horloge(_nbMode, _resolution),
heuresAlarme(0),
minutesAlarme(0),
alarme(false) {


}

Reveil::~Reveil() {


}

void Reveil::AvancerHeuresAlarme() {
    heuresAlarme++;
    if (resolution == 24) {
        if (heuresAlarme == 24) {
            heuresAlarme = 0;
        }
    } else {
        if (heuresAlarme > 12) {
            heuresAlarme = 1;
        }
    }
}

void Reveil::AvancerMinutesAlarme() {
    minutesAlarme++;
    if (minutesAlarme == 60) {
        minutesAlarme = 0;
    }
}

void Reveil::ReculerHeuresAlarme() {
    heuresAlarme--;
    if (heuresAlarme == -1) {
        heuresAlarme = resolution - 1;
    }
}

void Reveil::ReculerMinutesAlarme() {
    minutesAlarme--;
    if (minutesAlarme == -1) {
        heuresAlarme--;
        minutesAlarme = 59;
    }
}

TOUCHES_CLAVIER Reveil::Controler(TOUCHES_CLAVIER _numTouche) {
    _numTouche = Horloge::Controler(_numTouche);

    switch (mode) {
        case ACTIVATION_ALARME:
            switch (_numTouche) {
                case PLUS:
                    alarme = true;
                    break;
                case MOINS:
                    alarme = false;
                    break;
                case MODE:
                    ChangerMode();
            }
            leCadran->Afficher("AL", 1);
            if (alarme == true) {
                leCadran->Afficher("I ", 4);
            } else {
                leCadran->Afficher("O ", 4);
            }
            break;

        case REGLAGE_HEURESALARME:
            switch (_numTouche) {
                case PLUS:
                    AvancerHeuresAlarme();
                    break;
                case MOINS:
                    ReculerHeuresAlarme();
                    break;
                case MODE:
                    ChangerMode();
            }
            leCadran->Afficher("HA", 1);
            leCadran->Afficher(heuresAlarme, 4);
            break;

        case REGLAGE_MINUTESALARME:
            switch (_numTouche) {
                case PLUS:
                    AvancerMinutesAlarme();
                    break;
                case MOINS:
                    ReculerMinutesAlarme();
                    break;
                case MODE:
                    ChangerMode();
            }
            leCadran->Afficher("MA", 1);
            leCadran->Afficher(minutesAlarme, 4);

            break;
        case AUCUN_REGLAGE:
            if (heures == heuresAlarme && minutes == minutesAlarme) {
                leCadran2->Afficher("ALAR", 1);
            }

            break;
    }

    return _numTouche;
}
