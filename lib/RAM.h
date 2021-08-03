#pragma once

#include "Item.h"

#ifndef RAM_H
#define RAM_H

class RAM : public Item {
	public:
		char* type;
		char* size;
		char* frequency;
		
	public:
		RAM(char* size, char* type = new char('\0'), char* frequency = new char('\0'));
		
	private:
		void setDetailsToItemName();
};

#endif //RAM_H
