#pragma once

#include "Item.h"

#ifndef MOTHERBOARD_H
#define MOTHERBOARD_H

class MotherBoard : public Item {
public:
  char* company;
  char* chipset;
  char* modal;
  char* cpuSocket;
  char* ramSlots;
  char* boardSize;

public:
  MotherBoard(char* chipset, char* cpuSocket, char* ramSlots, char* boardSize = new char('\0'), char* company = new char('\0'), char* modal = new char('\0'), double* unitPrice = 0.0, double* unitDiscount = 0.0, int* quantity = 1);

private:
  void setDetailsToItemName();

}

#endif //MOTHERBOARD
