#include "Personnel.h"
#include <iostream>
#include <cctype>
using namespace std;

Personnel::Personnel() : nom(""), position(""), salaire(0.0) {}

Personnel::Personnel(string n, string p, double s) : nom(n), position(p), salaire(s) {}

Personnel::~Personnel() {}

void Personnel::saisie_personnel() {
    cout << "Entrez le nom : ";
    cin >> nom;
    cout << "Entrez la position : ";
    cin >> position;
    cout << "Entrez le salaire : ";
    cin >> salaire;
}

void Personnel::affiche_personnel() {
    cout << "Nom : " << nom << " | Position : " << position << " | Salaire : " << salaire << endl;
}

void Personnel::verifier_salaire() {
    if (salaire > 1000) {
        cout << "Vous êtes riche labes aalik!" << endl;
    }
}

void Personnel::verifier_poste() {
    if (position == "directeur" || position == "Directeur" || position == "DIRECTEUR") {
        cout << "Ah ! Vous êtes le directeur/ moudir !" << endl;
    }
}

void Personnel::marbouh_sanawi() {
    cout << "Lmarbou7 sanawi : " << salaire * 12 << " DT" << endl;
}
