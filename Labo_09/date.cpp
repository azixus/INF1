/*
 -----------------------------------------------------------------------------------
 Laboratoire : <nn>
 Fichier     : <nom du fichier>.cpp
 Auteur(s)   : <prénom> <nom>
 Date        : <jj.mm.aaaa>

 But         : <à compléter>

 Remarque(s) : <à compléter>

 Compilateur : MinGW-g++ <x.y.z>
 -----------------------------------------------------------------------------------
 */

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   date.h
 * Author: stéphane
 *
 * Created on November 27, 2018, 1:55 PM
 */

#include "date.h"
#include "annexe.h"
#include <cstdlib>
#include <iostream>

using namespace std;

void saisieDate(const string&  msg,
                const string&  msg_erreur,
                const unsigned annee_min,
                const unsigned annee_max) {
    //TODO parametre
    const char SEPARATEUR_DATE = '-';

    unsigned jour, mois, annee;

    bool valeurOk;
    do {
        //On assume qu'il n'y a pas d'erreur en début de programme
        valeurOk = true;

        //Message de saisie
        cout << msg     << JOUR_MIN << SEPARATEUR_DATE << MOIS_MIN << SEPARATEUR_DATE << annee_min
             << " et "  << JOUR_MAX << SEPARATEUR_DATE << MOIS_MAX << SEPARATEUR_DATE << annee_max << endl;

        //Lecture du jour
        if (!(cin >> jour)) {
            cin.clear();
            valeurOk = false;
        }
        viderBuffer(SEPARATEUR_DATE);

        //Lecture du mois
        if (!(cin >> mois)) {
            cin.clear();
            valeurOk = false;
        }
        viderBuffer(SEPARATEUR_DATE);

        //Lecture de l'annee
        if (!(cin >> annee)) {
            cin.clear();
            valeurOk = false;
        }
        viderBuffer();

        if (!valeurOk)
            continue;

        //Vérification des saisies
        if(!anneeCorrecte(annee, annee_min, annee_max) or !moisCorrect(mois) or !jourCorrect(jour))
        {
            cout << msg_erreur << endl;
            valeurOk = false;
        }
        viderBuffer();
    } while(!valeurOk);
}


bool anneeCorrecte(const unsigned annee,
                   const unsigned annee_min,
                   const unsigned annee_max);

bool moisCorrect(const unsigned int mois);

bool jourCorrect(const unsigned int jour);

bool estBissextile(const unsigned int annee) {
    return annee % 400 == 0 or (annee % 4 == 0 and annee % 100 != 0);
}