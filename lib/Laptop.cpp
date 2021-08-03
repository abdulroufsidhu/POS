#include "Laptop.h"

Laptop::Laptop( char* laptopName, CPU* cpu, RAM* ram, Display* display, Storage* storage, Battery* battery, Camera* camera, GPU* gpu, double* price, double* discount ,int* quantity) {
    this->Item::name = laptopName;
    this->cpu = cpu;
    this->gpu = gpu;
    this->ram = ram;
    this->battery = battery;
    this->camera = camera;
    this->display = display;
    this->storage = storage;
    this->unitPrice = price;
    this->unitDiscount = discount;
    this->quantity = quantity;
    this->totalPrice = (Item::unitPrice - Item::unitDiscount) * Item::quantity;
}
