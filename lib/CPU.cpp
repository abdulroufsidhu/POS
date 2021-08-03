#include "CPU.h"

void CPU::setDetailsToItemName() {
	this->Item::name = this->company;
	strcat(this->Item::name , " ");
	strcat(this->Item::name , this->series);
	strcat(this->Item::name , " ");
	strcat(this->Item::name , this->generation);
	strcat(this->Item::name , " [{ ");
	strcat(this->Item::name , this->frequency);
	strcat(this->Item::name , " } ");
	strcat(this->Item::name , this->cache);
	strcat(this->Item::name , " ] ( ");
	strcat(this->Item::name , this->modal);
	strcat(this->Item::name , " )");
}
CPU::CPU(char* company, char* series, char* generation,char* frequency, char* cache, char* modal = new char('\0'), double* unitPrice, double* unitDiscount, int* quantity) {
	this->company = company;
	this->series = series;
	this->generation = generation;
	this->frequency = frequency;
	this->cache = cache;
	this->modal = modal;
	this->setDetailsToItemName();
    this->Item::unitPrice = unitPrice;
    this->Item::unitDiscount = unitDiscount;
    this->Item::quantity = quantity;
    this->Item::totalPrice = (unitPrice - unitDiscount) * quantity;
}
