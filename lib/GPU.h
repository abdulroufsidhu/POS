#pragma once

#include "Item.h"
#include "RAM.h"
#ifndef GPU_H
#define GPU_H

class GPU : public Item{
	public:
		char* company;
		char* vendor;
		char* modal;
		RAM* vRAM;
		
	public:
		GPU(char* company, RAM* vRAM, char* vendor, char* modal = new char('\0'));

	private:
		void setDetailsToItemName();
};

#endif //GPU_H
