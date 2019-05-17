/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: abourrelly
 *
 * Created on 28 janvier 2019, 10:23
 */

#include <cstdlib>
#include <iostream>
#include <time.h>

#include "CompteBancaire.h"
#include "CompteEpargne.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    CompteEpargne unCompte;

    int choix;
    double nouveauTaux;
    double somme;
    double retrait;

    bool retour;
    bool sortie = false;

    string menu[] = {

        "   -Compte Bancaire-",
        "Déposer",
        "Retirer",
        "Solde",
        "   -Compte Epargne-",
        "Changer Taux",
        "Calculer Interets",
        "Créditer Interets",
        "Quitter"
    };

    do {

        system("clear");
        for (int i = 0; i < 9; i++) {

            cout << i + 1 << "-" << menu[i] << endl;
        }

        cout << endl << "Votre choix :";
        cin >> choix;

        cout << endl << "choix fait :" << choix << endl;

        switch (choix) {

            case 2:
                system("clear");
                cout << "Quelle somme voulez-vous déposer ?" << endl << endl;
                cin >> somme;
                unCompte.Deposer(somme);
                cout << somme << "€ ont été ajoutés à votre compte." << endl;
                system("sleep 1");
                break;

            case 3:
                system("clear");
                cout << "Quelle somme voulez-vous retirer ?" << endl << endl;
                cin >> retrait;
                retour = unCompte.Retirer(retrait);

                switch (retour) {
                    case true:
                        cout << retrait << "€ ont été retirés à votre compte." << endl;
                        break;
                    case false:
                        cout << "Solde Insuffisant" << endl;
                        break;
                }

                system("sleep 1");
                break;

            case 4:
                system("clear");
                cout << "Votre solde est de " << unCompte.ObtenirSolde() << "€" << endl;
                system("sleep 1");
                break;

            case 6:
                system("clear");
                cin >> nouveauTaux;
                unCompte.ChangerTaux(nouveauTaux);
                cout << "Le taux est mainteant de " << nouveauTaux << endl;
                system("sleep 1");
                break;

           /* case 7:
                system("clear");
                cout << " Votre solde sera de " << unCompte.CalculerInterets()
                        << "€ au lieu de " << unCompte.ObtenirSolde()
                        << "€" << endl;
                system("sleep 1");
                break;
            */
                
            case 8:
                system("clear");
                unCompte.CrediterInterets();
                cout << "Votre solde est mainteant de " << unCompte.ObtenirSolde()<< endl;
                system("sleep 1");
                break;

            case 9:
                system("clear");
                sortie = true;
                break;
        }

    } while (sortie != true);

    return 0;
}

