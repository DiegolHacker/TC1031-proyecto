#include <iostream>
#include <string>
#include "equipo.h"
#include <stdlib.h>

Pokemon* Charizard = new Pokemon("Charizard","Fuego","Volador",297,254,206,236); //Creción de los objetos de la clase Pokemon
Pokemon* Garchomp = new Pokemon("Garchomp","Dragon","Tierra",357,296,226,240);
Pokemon* Volcarona = new Pokemon("Volcarona","Fuego","Bicho",311,306,246,236);
Pokemon* Lucario = new Pokemon("Lucario","Lucha","Acero",281,266,176,286);
Pokemon* Mewtwo = new Pokemon("Mewtwo", "Psiquico", " ",353,344,192,272);


int main(){
  Equipo equipo;
  equipo.NuevoPoke(Charizard);
  equipo.NuevoPoke(Garchomp);
  equipo.NuevoPoke(Volcarona);
  equipo.NuevoPoke(Lucario);
  equipo.NuevoPoke(Mewtwo);

  std::system("CLS"); //Función para limpiar la consola.

  int seleccion;
  bool continuar = true;
  std::string nom;
  std::string tip1;
  std::string tip2;
  int vida;
  int ataque;
  int defensa;
  int velocidad;

  while(continuar==true){
    std::cout<<"\nSelecciona una accion:\n\n1. Mostrar tu equipo. \n2. Añadir pokémon. \n3. Ordenar tu equipo. \n4. Salir.\n";
    std::cin>>seleccion;
    if(seleccion==1){
      equipo.MostrarEquipo();
    }
    else if(seleccion==2){
      std::cout<<"\nComo se llama?";
      std::cin>>nom;
      std::cout<<"\nCual es su primer tipo?";
      std::cin>>tip1;
      std::cout<<"\nCual es su segundo tipo?";
      std::cin>>tip2;
      std::cout<<"\nCuanta vida tiene?";
      std::cin>>vida;
      std::cout<<"\nCuanta ataque tiene?";
      std::cin>>ataque;
      std::cout<<"\nCuanta defensa tiene?";
      std::cin>>defensa;
      std::cout<<"\nCuanta velocidad tiene?";
      std::cin>>velocidad;
      Pokemon* poke = new Pokemon(nom,tip1,tip2,vida,ataque,defensa,velocidad);
          equipo.NuevoPoke(poke);

    }
    else if(seleccion==3){
      equipo.SortHp();
    }
    else if(seleccion==4){
      continuar = false;
    }
    else{
      std::cout<<"seleccion invalida";
    }
  }

}
