#pragma once

#include "Item.h"

#ifndef STORAGE_H
#define STORAGE_H

class Storage : public Item {
	public:
		char* type;
		char* size;
		char* rwSpeed;
		char* modal;
		
	public:
		Storage(char* type, char* size, char* rwSpeed, char* modal = new char('\0'),double* unitPrice = 0.0, double* unitDiscount = 0.0, int* quantity = 1);
		
	private:
		setDetailsToItemName();
};

#endif //STORAGE_H
