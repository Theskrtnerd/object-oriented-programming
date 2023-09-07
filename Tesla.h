#ifndef TESLA_H
#define TESLA_H
#include "Car.h"

class Tesla: public Car {
  private:
    char model;
    float batteryPercentage;
  public:
    Tesla();
    Tesla(char model, int price);

    char get_model();
    float get_batteryPercentage();
    void set_model(char model);
    void set_batteryPercentage(int batteryPercentage);

    void chargeBattery(int mins);
    void drive(int kms);
};

#endif