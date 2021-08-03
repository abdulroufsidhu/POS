#include "Camera.h"

void Camera::setDetailsToItemName(){
    this->Item::name = this->resolution;
    strcat(this->Item::name, " [ ");
    strcat(this->Item::name, this->mountedPoint);
    strcat(this->Item::name, " { ");
    strcat(this->Item::name, this->focus);
    strcat(this->Item::name, " } ");
    strcat(this->Item::name, this->type);
    strcat(this->Item::name, " ] ( ");
    strcat(this->Item::name, this->company);
    strcat(this->Item::name, " ) ");
}

Camera::Camera(char* resolution, char* mountedPoint, char* focus, char* type, char* company, double* unitPrice, double* unitDiscount, int* quantity) {
    this->resolution = resolution;
    this->mountedPoint = mountedPoint;
    this->focus = focus;
    this->type = type`;
    this->company = company;
    this->Item::unitPrice = unitPrice;
    this->Item::unitDiscount = unitDiscount;
    this->Item::quantity = quantity;
    this->Item::totalPrice = (unitPrice - unitDiscount) * quantity;
    setDetailsToItemName();
}
