#pragma once

#include <iostream>
#include <cstring>

#ifndef ITEM_H
#define ITEM_H

class Item {
	public:
		char* name;
		double* totalPrice;
		double* unitPrice;
		double* unitDiscount;
		int* quantity;
};

#endif //ITEM_H
