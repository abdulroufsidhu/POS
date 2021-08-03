#pragma once

#include "Item.h"

#ifndef DISPLAY_H
#define DISPLAY_H

class Display : public Item {
public:
  char* company;
  char* type;
  char* size;
  char* resolution;
  char* modal;

public:
  Display(char* type, char* size, char* resolution, char* company = new char('\0'), char* modal = new char('\0'), double* unitPrice = 0.0, double* unitDiscount = 0.0, int* quantity = 1);

private:
  void setDetailsToItemName();

};

#endif //DISPLAY_H
