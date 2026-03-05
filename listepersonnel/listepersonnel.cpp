#include "ListePersonnel.h"
#include <iostream>
using namespace std;

ListePersonnel::~ListePersonnel() {
    for (int i = 0; i < liste.size(); i++)
        delete liste[i];
}

void ListePersonnel::remplir_liste_personnel() {
    char rep = 'O';
    while (rep == 'O' || rep == 'o') {
        char type;
        cout << "Ajouter un Patron ? (O/N) : ";
        cin >> type;

        Personnel* p;
        if (type == 'O' || type == 'o') {
            p = new Patron();
            ((Patron*)p)->saisie_patron();
        } else {
            p = new Personnel();
            p->saisie_personnel();
        }

        liste.push_back(p);

        cout << "Voulez-vous continuer (O/N) ? ";
        cin >> rep;
    }
}

void ListePersonnel::afficher_liste_personnel() {
    cout << "\n===== LISTE DU PERSONNEL =====\n";
    for (int i = 0; i < liste.size(); i++) {
        if (Patron* pat = (Patron*)liste[i])
            pat->affiche_patron();
        else
            liste[i]->affiche_personnel();
        cout << endl;
    }
}
