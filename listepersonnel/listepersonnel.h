#ifndef LISTEPERSONNEL_H
#define LISTEPERSONNEL_H

#include <vector>
#include "Personnel.h"
#include "Patron.h"
using namespace std;

class ListePersonnel {
private:
    vector<Personnel*> liste;

public:
    ~ListePersonnel();

    void remplir_liste_personnel();
    void afficher_liste_personnel();
};

#endif
