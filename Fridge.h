#ifndef FRIDGE_H
#define FRIDGE_H

#include "Appliance.h"

class Fridge: public Appliance{
  private:
    double volume;
  public:
    Fridge();
    Fridge(int powerRating, double volume);

    double getVolume();
    void setVolume(double volume);

    double getPowerConsumption();

};

#endif