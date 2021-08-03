#pragma once

#include "Item.h"

#ifndef CAMERA_H
#define CAMERA_H

class Camera : public Item {
public:
  char* company;
  char* type;
  char* focus;
  char* mountedPoint;
  char* resolution;

public:
  Camera(char* resolution, char* mountedPoint, char* focus = new char('\0), char* type = new char('\0), char* company = new char('\0), double* unitPrice = 0.0, double* unitDiscount = 0.0, int* quantity = 1);

private:
  void setDetailsToItemName();
};


#endif // CAMERA_H
