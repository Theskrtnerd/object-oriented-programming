#include "Musician.h"
#include<iostream>
#include<string>

Musician::Musician(){
  _instrument = "null";
  _experience = 0;
}

Musician::Musician(std::string instrument, int experience){
  _instrument = instrument;
  _experience = experience;
}

std::string Musician::get_instrument(){
  return _instrument;
}

int Musician::get_experience(){
  return _experience;
}
