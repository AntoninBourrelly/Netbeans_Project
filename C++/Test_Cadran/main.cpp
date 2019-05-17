/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: abourrelly
 *
 * Created on 15 janvier 2019, 11:02
 */

#include <cstdlib>
#include "Cadran.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Cadran leCadran;
    Cadran leCadran2(5,5);
    
    char touche;
    do{
        touche = getchar();
    } while (touche != ' ');
    
    return 0;
}

