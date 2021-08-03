#include "RAM.h"

RAM::setDetailsToItemName() {
	this->Item::name = size;
	strcat(this->Item::name , " [ { ");
	strcat(this->Item::name , type);
	strcat(this->Item::name , " } ");
	strcat(this->Item::name , frequency);
	strcat(this->Item::name , " ] ");
}

RAM::RAM(char* size, char* type, char* frequency, double* unitPrice, double* unitDiscount, int* quantity) {
	this->size = size;
	this->type = type;
	this->frequency = frequency;
	this->Item::unitPrice = unitPrice;
	this->Item::unitDiscount = unitDiscount;
	this->Item::quantity = quantity;
	this->Item::totalPrice = (Item::unitPrice - Item::unitDiscount) * Item::quantity;
	this->setDetailsToItemName();
}
