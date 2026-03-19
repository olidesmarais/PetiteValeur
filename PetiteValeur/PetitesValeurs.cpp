//
//  PetiteValeur.cpp
//  PetiteValeur
//
//  Created by Olivier Desmarais on 2026-03-18.
//

#include "PetitesValeurs.hpp"

using namespace std;

template<typename Conteneur, typename PredicatUnaire>
int trouver_si(const std::vector<Conteneur> valeurs, const PredicatUnaire& critere){
    int i = 0;
    for(auto&& valeur : valeurs){
        if(critere(valeur))
            return i;
        i++;
    }
    return indexe_pas_trouve;
}

PetitesValeurs::PetitesValeurs(int maximum){
    maximum_ = maximum;
}

void PetitesValeurs::ajouter(int valeur){
    valeurs_.push_back(valeur);
}

bool PetitesValeurs::valeursSontCorrectes(){
    return trouver_si(valeurs_, [this](int valeur){return valeur > maximum_;}) == indexe_pas_trouve;
}

ostream& operator<<(ostream& os, PetitesValeurs petitesValeurs){
    for(int valeur : petitesValeurs.valeurs_){
        os << valeur << "\t";
    }
    return os << endl;
}
