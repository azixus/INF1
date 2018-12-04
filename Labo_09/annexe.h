/*
 -----------------------------------------------------------------------------------
 Laboratoire : Labo_08_Clavier
 Fichier     : annexe.h
 Auteur(s)   : Robin Müller, Stéphane Teixeira Carvalho
 Date        : 05.12.2018

 But         : Gérer les fonctions d'entrées sorties ainsi que des
               fonctions particulières

 Remarque(s) :

 Compilateur : MinGW-g++ 6.3.0
 -----------------------------------------------------------------------------------
 */

#ifndef ANNEXE_H
#define ANNEXE_H
#include <string>

/**
 * Fonction permettant de vider le buffer
 */
void viderBuffer(char delimiteur = '\n');

/**
 * Permet de déterminer si la partie devra être recommencée ou non
 * @return true pour recommencer et false pour arrêter
 */
bool repondsOui(const std::string& msg, const std::string& msgErreur, char oui = 'O', char non = 'N');

/**
 * Détermine si la chaine de caractère en paramètre est un nombre
 * @param chaineCaractere string à analyser
 * @return true si la valeur est un nombre, false sinon
 */
bool estUnNombre(const std::string& chaineCaractere);
#endif