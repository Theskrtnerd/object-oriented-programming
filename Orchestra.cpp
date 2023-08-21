#include "Orchestra.h"

Orchestra::Orchestra(){
  _size = 0;
  for(int i =0;i<_size;i++){
    Musician _list[i] = Musician("null",0);
  }
}

Orchestra::Orchestra(int size){
  _size = size;
}

int Orchestra::get_current_number_of_members(){
  for(int i = 0;i<_size;i++){
    if(_list[i].get_instrument() == "null" && _list[i].get_experience() == 0){
      return i;
    }
  }
};

bool Orchestra::has_instrument(std::string instrument){
  for(int i =0;i<_size;i++){
    if(_list[i].get_instrument() == instrument){
      return true;
    }
  }
  return false;
};

Musician* Orchestra::get_members(){
  Musician* list;
  for(int i=0;i<_size;i++){
    if(_list[i].get_instrument() != "null" or _list[i].get_experience() != 0){
      list[i] = _list[i];
    }
  }
  return list;
}; 

bool Orchestra::add_musician(Musician new_musician){
  for(int i=0;i<_size;i++){
    if(_list[i].get_instrument() == "null" and _list[i].get_experience() == 0){
      _list[i] = new_musician;
      return true;
    }
  }
  return false;
};


