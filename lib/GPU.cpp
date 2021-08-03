#include "GPU.h"

void GPU::setDetailsToItemName() {
	this->Item::name = this->company;
	strcat(this->Item::name, " ");
	strcat(this->Item::name,this->vRAM->Item::name);
	strcat(this->Item::name, " ");
	strcat(this->Item::name , this->modal);
	strcat(this->Item::name , " [ ");
	strcat(this->Item::name , this->vendor);
	strcat(this->Item::name , " ] ");
}

GPU::GPU(char* company, RAM* vRAM, char* vendor, char* modal, double* unitPrice, double* unitDiscount, int* quantity) {
	this->company = company;
	this->vRAM = vRAM;
	this->vendor = vendor;
	this->modal = modal;
	this->Item::unitPrice = unitPrice;
	this->Item::unitDiscount = unitDiscount;
	this->Item::quantity = quantity;
	this->Item::totalPrice = (unitPrice - unitDiscount) * quantity;
	setDetailsToItemName();
}
