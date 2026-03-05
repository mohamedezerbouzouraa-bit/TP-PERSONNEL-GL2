#include "Patron.h"
#include <iostream>
using namespace std;

Patron::Patron() : Personnel(), bonus(0.0), voiture("") {}

Patron::Patron(string n, string p, double s, double b, string v)
    : Personnel(n, p, s), bonus(b), voiture(v) {}

void Patron::saisie_patron() {
    saisie_personnel();
    cout << "Entrez le bonus annuel : ";
    cin >> bonus;
    cout << "Entrez la voiture : ";
    cin >> voiture;
}

void Patron::affiche_patron() {
    affiche_personnel();
    cout << "Bonus : " << bonus << " | Voiture : " << voiture << endl;
}
