#ifndef PATRON_H
#define PATRON_H

#include "Personnel.h"
#include <string>
using namespace std;

class Patron : public Personnel {
private:
    double bonus;
    string voiture;

public:
    Patron();
    Patron(string n, string p, double s, double b, string v);

    void saisie_patron();
    void affiche_patron();
};

#endif
