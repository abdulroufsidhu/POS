#pragma once

#include "Item.h"

#ifndef BATTERY_H
#define BATTERY_H

class Battery : public Item{
public:
  char* company;
  char* type;
  char* modal;
  char* capacity;

public:
  Battery(char* capacity, char* modal, char* company = new char('\0\'), char* type = new char('\0'), double* unitPrice = 0.0, double* unitDiscount = 0.0, int* quantity = 1);

private:
  void setDetailsToItemName();
};

#endif //BATTERY_H
