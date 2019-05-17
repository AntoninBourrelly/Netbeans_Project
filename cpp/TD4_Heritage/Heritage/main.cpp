/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: abourrelly
 *
 * Created on 17 janvier 2019, 11:11
 */

#include <cstdlib>
#include "cadran.h"
#include "clavier.h"
#include "horloge.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Horloge uneHorloge;
    
    TOUCHES_CLAVIER laTouche = AUCUNE;
    do{
        laTouche = uneHorloge.Controler(laTouche);
    } while (laTouche!= FIN);
    
    return 0;
}

