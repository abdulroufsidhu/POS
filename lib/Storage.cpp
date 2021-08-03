#include "Storage.h"

void Storage::setDetailsToItemName() {
    this->Item::name = this->size;
    strcat(this->Item::name, " [ {");
    strcat(this->Item::name, this->type);
    strcat(this->Item::name, " } ");
    strcat(this->Item::name, this->rwSpeed);
    strcat(this->Item::name, " ] ( ");
    strcat(this->Item::name, this->modal);
    strcat(this->Item::name, " ) ");
}
Storage::Storage(char* type, char* size, char* rwSpeed, char* modal, double* unitPrice, double* unitDiscount, int* quantity) {
	this->type = type;
	this->size = size;
	this->rwSpeed = rwSpeed;
	this->modal = modal;
	this->Item::unitPrice = unitPrice;
	this->Item::unitDiscount = unitDiscount;
	this->Item::quantity = quantity;
	this->Item::totalPrice = (Item::unitPrice - Item::unitDiscount) * Item::quantity;
	setDetailsToItemName();
}
