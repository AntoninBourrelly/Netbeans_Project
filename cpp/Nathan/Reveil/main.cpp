/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: nderouelle
 *
 * Created on 24 janvier 2019, 08:56
 */

#include <cstdlib>
#include "Reveil.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Reveil unReveil;
    
    TOUCHES_CLAVIER laTouche = AUCUNE;
    do{
        laTouche = unReveil.Controler(laTouche);
    }while(laTouche != FIN);
    
    return 0;
}

