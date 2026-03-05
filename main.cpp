#include "Personnel.h" 
#include "Patron.h"
#include "ListePersonnel.h"
#include <iostream>
using namespace std;

int main() {
    cout << "   TEST noumrou 1 : Personnel ======\n";
    Personnel p1;
    p1.saisie_personnel();
    cout << "Affichage du personnel :\n";
    p1.affiche_personnel();
    p1.verifier_salaire();
    p1.verifier_poste();
    p1.marbouh_sanawi();
    cout << endl;

    cout << "    TEST noumrou 2 : Patron ======\n";
    Patron pat1;
    pat1.saisie_patron();
    cout << "Affichage du patron :\n";
    pat1.affiche_patron();
    pat1.verifier_salaire();
    pat1.verifier_poste();
    pat1.marbouh_sanawi();
    cout << endl;

    cout << "     TEST noumrou 3 : ListePersonnel ======\n";
    ListePersonnel LP;
    LP.remplir_liste_personnel();
    
    cout << "\nAffichage de la liste complète :\n";
    LP.afficher_liste_personnel();

    return 0;
}
