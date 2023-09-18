#ifndef EQUIPO_H
#define EQUIPO_H

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include "pokemon.h"


class Equipo{
private:
  std::vector<Pokemon*> team;

public:
  void NuevoPoke(Pokemon* poke);
  void MostrarEquipo();
  void SortNombre();
  void SortTipo1();
  void SortTipo2();
  void SortHp();
  void SortAt();
  void SortDef();
  void SortVel();

};
void Equipo::NuevoPoke(Pokemon* poke){
  team.push_back(poke);
};

void Equipo::MostrarEquipo() {
  std::cout<<"Tu equipo tiene:\n";
  for (Pokemon* poke :team){
      poke->displayData();
  }
};

void Equipo::SortHp(){
    std::sort(team.begin(),team.end(),[](Pokemon* a, Pokemon* b){return a->get_hp()<b->get_hp();
    });
}



#endif
