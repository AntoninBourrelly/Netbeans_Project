/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mcoeurjoly
 *
 * Created on 28 janvier 2019, 09:30
 */

#include <cstdlib>
#include <iostream>

#include "CompteBancaire.h"
#include "CompteCourant.h"
#include "CompteEpargne.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    /************************************TEST CompteBancaire ******************************
    string menu1[] = {"Déposer", "Retirer", "Solde", "Quitter"};
    int choix;
    double montant;
    CompteBancaire compte;
    do {
      cout << "BANQUE ECO+" <<endl;
        for (int i = 0; i < 4; i++) {
            cout << i + 1 << " - " << menu1[i] << endl;
        }
        cout << "Votre Choix:";
        cin>>choix;
        switch (choix) {
            case 1:
                system("clear");
                cout << "Quel montant voulez-vous déposer ?";
                cin>>montant;
                compte.Deposer(montant);
                break;
            case 2:
                system("clear");
               cout << "Quel montant voulez-vous retirer?";
                cin>>montant;
                if (compte.Retirer(montant) == true) {
                    cout << "Retrait accepté" << endl;
                } else {
                    cout << "Retrait refusé" << endl;
                }
                break;
            case 3:
                system("clear");
                cout << "Votre solde est de : " << compte.ObtenirSolde()<< " €" << endl;
                break;
            case 4:
                system("clear");
                cout << "Fin de la gestion des comptes" << endl <<endl;
                break;
        }




    } while (choix != 4);
    return 0;
} 
     /************************************TEST CompteEpargne**************************************

    string menu2[] = {"Déposer", "Retirer", "Solde","Changer le taux" ,"Créditer les intérets", "Quitter"};
    int choix;
    double montant;
    double taux;
    CompteEpargne compte;
    do {

cout << "BANQUE ECO+" <<endl;
        for (int i = 0; i < 6; i++) {
            cout << i + 1 << " - " << menu2[i] << endl;
        }
        cout << "Votre Choix:";
        cin>>choix;
        switch (choix) {
            case 1:
                system("clear");
                cout << "Quel montant voulez-vous déposer ?";
                cin>>montant;
                compte.Deposer(montant);
                break;
            case 2:
                system("clear");
                   cout << "Quel montant voulez-vous retirer?";
                cin>>montant;
                if (compte.Retirer(montant) == true) {
                    cout << "Retrait accepté" << endl;
                } else {
                    cout << "Retrait refusé" << endl;
                }
                break;
            case 3:
                system("clear");
                cout << "Votre solde est de : " << compte.ObtenirSolde()<< " €" << endl;
                break;
            case 4:
                system("clear");
                cout<<"Indiquer le nouveau taux en %: ";
                cin>>taux;
                compte.ChangerTaux(taux);
                break;
            case 5:
                system("clear");
                compte.CrediterInterets();
                cout << "Votre nouveau solde est de : " << compte.ObtenirSolde() << " €" << endl;
                break;
                      
            case 6:
                system("clear");
                cout << "Fin de la gestion des comptes" << endl <<endl;
                break;
        }




    } while (choix != 6);
    return 0;
}
/************************************TEST CompteCourant**************************************/

    string menu3[] = {"Déposer", "Retirer", "Solde","Changer découvert" , "Quitter"};
    int choix;
    double montant;
    double nouveaudecouvert;
    CompteCourant compte;
    do {

cout << "BANQUE ECO+" <<endl;
        for (int i = 0; i < 5; i++) {
            cout << i + 1 << " - " << menu3[i] << endl;
        }
        cout << "Votre Choix:";
        cin>>choix;
        switch (choix) {
            case 1:
                system("clear");
                cout << "Quel montant voulez-vous déposer ? ";
                cin>>montant;
                compte.Deposer(montant);
                break;
            case 2:
                system("clear");
                  cout << "Quel montant voulez-vous retirer ? ";
                cin>>montant;
                if (compte.Retirer(montant) == true) {
                    cout << "Retrait accepté" << endl;
                } else {
                    cout << "Retrait refusé" << endl;
                }
                break;
            case 3:
                system("clear");
                cout << "Votre solde est de : " << compte.ObtenirSolde()<< " €" << endl;
                break;
            case 4:
                system("clear");
                cout<<"Indiquer le nouveau decouvert: ";
                cin>>nouveaudecouvert;
               compte.ChangerDecouvert(nouveaudecouvert);
                break;
         
            case 5:
                //system("clear");
                cout << "Fin de la gestion des comptes" << endl <<endl;
                break;
        }
    } while (choix != 5);
    return 0;
}
/************************************TEST CompteCourant**************************************/