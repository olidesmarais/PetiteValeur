//
//  main.cpp
//  PetiteValeur
//
//  Created by Olivier Desmarais on 2026-03-18.
//

#include <iostream>
#include "PetitesValeurs.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    PetitesValeurs petitesValeurs(10);
    petitesValeurs.ajouter(3);
    petitesValeurs.ajouter(5);
    petitesValeurs.ajouter(7);
    petitesValeurs.ajouter(2);
//    petitesValeurs.ajouter(12);
    cout << petitesValeurs << endl;
    cout << petitesValeurs.valeursSontCorrectes() << endl;
    return EXIT_SUCCESS;
}
