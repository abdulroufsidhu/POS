#include "Battery.h"

void Battery::setDetailsToItemName() {
    this->Item::name = capacity;
    strcat(this->Item::name, " [ ");
    strcat(this->Item::name, this->modal);
    strcat(this->Item::name, " { ");
    strcat(this->Item::name, this->company);
    strcat(this->Item::name, " } ");
    strcat(this->Item::name, this->type);
    strcat(this->Item::name, " ] ");
}

Battery::Battery(char* capacity, char* modal, char* company, char* type, double* unitPrice , double* unitDiscount , int* quantity) {
    this->capacity = capacity;
    this->modal = modal;
    this->company = company;
    this->type = type;
    this->Item::unitPrice = unitPrice;
    this->Item::unitDiscount = unitDiscount;
    this->Item::quantity = quantity;
    this->Item::totalPrice = (unitPrice - unitDiscount) * quantity;
    setDetailsToItemName();
}
