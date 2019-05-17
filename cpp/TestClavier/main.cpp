/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: nderouelle
 *
 * Created on 17 janvier 2019, 09:13
 */

#include <cstdlib>
#include "Clavier.h"
#include <unistd.h>
#include <stdio.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char touche;
    Clavier leClavier;

    do {

        touche = leClavier.ScruterClavier();
        if (touche != AUCUNE ) {
            printf("%d \n", touche);
        }

    } while (touche != FIN);



    return 0;
}

