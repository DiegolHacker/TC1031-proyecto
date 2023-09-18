#ifndef POKEMON_H
#define POKEMON_H
#include <string>
#include <iostream>
#include <cstdlib>

class Pokemon{ //Creación de la clase Pokémon.
private:
  std::string nombre; //Definición de los atributos privados de la clase Movimiento.
  std::string tipo1;
  std::string tipo2;
  int ataque;
  int defensa;
  int vida;
  int velocidad;

public:
  Pokemon(std::string nom, std::string ti1, std::string ti2, int hp, int at, int def, int vel): nombre(nom), tipo1(ti1), tipo2(ti2), vida(hp), ataque(at), defensa(def), velocidad(vel){}; //Constructor de la clase Pokémon.


  std::string get_nom(); //Getter para el atributo de nombre.
  int get_hp(); //Getter para el atributo de vida.
  int get_at(); //Getter para el atributo de ataque.
  int get_def(); //Getter para el atributo de defensa.
  int get_speed(); //Getter para el atributo de velocidad.

  std::string get_tipo1(); //Getter para el atributo de tipo1.
  std::string get_tipo2(); //Getter para el atributo de tipo2.

  void displayData(); //Imprime los datos del pokemon

};


std::string Pokemon::get_nom(){
  return nombre;
}

int Pokemon::get_hp(){
  return vida;
}

int Pokemon::get_at(){
  return ataque;
}

int Pokemon::get_def(){
  return defensa;
}

int Pokemon::get_speed(){
  return velocidad;
}

std::string Pokemon::get_tipo1(){
  return tipo1;
}

std::string Pokemon::get_tipo2(){
  return tipo2;
}

void Pokemon::displayData(){
  std::cout<<"\nNombre: "<<nombre<<"\nTipo 1: "<<tipo1<<"\nTipo 2: "<<tipo2<<"\nPuntos de vida: "<<vida<<"\nAtaque: "<<ataque<<"\nDefensa: "<<defensa<<"\nVelocidad: "<<velocidad<<"\n";
}

#endif
