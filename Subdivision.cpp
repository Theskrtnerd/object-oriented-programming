#include <iostream>
#include "Subdivision.h"

using namespace std;

Subdivision::Subdivision(){
  _subName = "";
  _size = 0;
  _maxsize = 0;
  _list = new House();
};                  
             // default constructor
Subdivision::Subdivision(std::string subName, int size){
  _subName = subName;
  _maxsize = size;
  _size = 0;
  _list = new House();
};

int Subdivision::get_num_houses(){
  return _size;
}; 

std::string Subdivision::get_subdiv_name(){
  return _subName;
};  // returns the subdivision's name

House * Subdivision::get_Houses(){
  return _list;
};           // returns the array of houses currently on the subdivision
bool Subdivision::add_House(House new_house){
  if(_size < _maxsize){
    _list[_size] = new_house;
    _size++;
    return true;
  }
  return false;
};

Subdivision::~Subdivision(){}; // destructor