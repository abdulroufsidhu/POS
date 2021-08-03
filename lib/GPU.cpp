#include "GPU.h"

void GPU::setDetailsToItemName() {
	this->Item::name = company;
	this->Item::name += " ";
	this->Item::name += vRAM->Item::name;
	this->Item::name += " ";
	this->Item::name += modal;
	this->Item::name += " [ ";
	this->Item::name += vendor;
	this->Item::name += " ] ";
}

GPU::GPU(char* company, RAM* vRAM, char* vendor, char* modal = '\0') {
	this->company = company;
	this->vRAM = vRAM;
	this->vendor = vendor;
	this->modal = modal;
	setDetailsToItemName();
}
