#include "Display.h"

void Display::setDetailsToItemName() {
    this->Item::name = this->type;
    strcat(this->Item::name , " ");
    strcat(this->Item::name , this->size);
    strcat(this->Item::name , " [ ");
    strcat(this->Item::name , this->resolution);
    strcat(this->Item::name , " { ");
    strcat(this->Item::name , this->company);
    strcat(this->Item::name , " } ] ( ");
    strcat(this->Item::name , this->modal);
    strcat(this->Item::name , " )");
}

Display::Display(char* type,char* size, char* resolution, char* company, char* modal, double* unitPrice , double* unitDiscount , int* quantity ) {
    this->size = size;
    this->type = type;
    this->resolution = resolution;
    this->company = company;
    this->modal = modal;
    this->Item::unitPrice = unitPrice;
    this->Item::unitDiscount = unitDiscount;
    this->Item::quantity = quantity;
    this->Item::totalPrice = (unitPrice - unitDiscount) * quantity;
    setDetailsToItemName();
}
