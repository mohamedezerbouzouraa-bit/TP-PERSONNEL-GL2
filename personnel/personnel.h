#ifndef PERSONNEL_H
#define PERSONNEL_H

#include <iostream>
#include <string>
using namespace std;

class Personnel {
protected:
    string nom;
    string position;
    double salaire;

public:
    Personnel();
    Personnel(string n, string p, double s);
    ~Personnel();

    void saisie_personnel();
    void affiche_personnel();
    void verifier_salaire();
    void verifier_poste();
    void marbouh_sanawi();
};

#endif
