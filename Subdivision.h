#ifndef SUBDIVISION_H
#define SUBDIVISION_H
#include<string>
#include "House.h"

class Subdivision{
  private:
    std::string _subName;
    int _size;
    int _maxsize;
    House* _list;
  public:
    Subdivision();                               // default constructor
    Subdivision(std::string subName, int size);
    int get_num_houses(); 
    std::string get_subdiv_name();  // returns the subdivision's name
    House * get_Houses();           // returns the array of houses currently on the subdivision
    bool add_House(House new_house);
    ~Subdivision(); // destructor
};

#endif