#include "Item.h"

RAM::setDetailsToItemName() {
	this->Item::name = size;
	this->Item::name += " [ { ";
	this->Item::name += type;
	this->Item::name += " } ";
	this->Item::name += frequency;
	this->Item::name += " ] ";
}

RAM::RAM(char* size, char* type, char* frequency) {
	this->size = size;
	this->type = type;
	this->frequency = frequency;
	this->setDetailsToItemName();
}
