#pragma once
#include "Item.h"
#include "CPU.h"
#include "Display.h"
#include "RAM.h"
#include "Storage.h"
#include "Battery.h"
#include "Camera.h"
#include "GPU.h"

#ifndef LAPTOP_H
#define LAPTOP_H

class Laptop {
public:
  Item* cpu;
  Item* ram;
  Item* display;
  Item* storage;
  Item* battery;
  Item* camera;
  Item* gpu;

public:
  Laptop(CPU* cpu, RAM* ram, Display* display, Storage* storage, Battery* battery, Camera* camera, GPU* gpu = NULL);

};

#endif //LAPTOP_H
