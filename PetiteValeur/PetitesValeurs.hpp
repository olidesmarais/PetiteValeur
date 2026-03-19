//
//  PetiteValeur.hpp
//  PetiteValeur
//
//  Created by Olivier Desmarais on 2026-03-18.
//

#include <iostream>

static const int indexe_pas_trouve = -1;
int trouver_si(const std::vector<int>, const std::function<bool(int)>&);

class PetitesValeurs {
public:
    PetitesValeurs(int);
    void ajouter(int);
    void modifierMax(int);
    bool valeursSontCorrectes();
    friend std::ostream& operator<<(std::ostream& os, PetitesValeurs);
private:
    std::vector<int> valeurs_;
    int maximum_;
};
