/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: nderouelle
 *
 * Created on 28 janvier 2019, 10:24
 */

#include "CompteBancaire.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int choix;
    /*
    string menu[] = {"Déposer", "Retirer", "Solde", "Quitter"};
    
    for(int i=0; i<4; i++){
        cout << i+1 << " - " << menu[i] << endl;
    }
    cout << endl << "Votre choix :";*/
    
    do{
        system("clear");
        CompteBancaire();
        cin >> choix;
        switch(choix){
            case 'D' :
                CompteBancaire.Deposer(solde);
                break;
            case 'R':
                
                break;
            case 'S':
                
                break;
        }
    }while(choix != 'Q');
    
    return 0;
}

