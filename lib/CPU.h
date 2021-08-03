#pragma once

#include "Item.h"
#ifndef CPU_H
#define CPU_H

class CPU : public Item {
	public:
		char* company;
		char* series;
		char* generation;
		char* modal;
		char* frequency;
		char* cache;
		
	public:
		CPU(char* company, char* series, char* generation,char* frequency, char* cache, char* modal = new char('\0'), double* unitPrice = 0.0, double* unitDiscount = 0.0, int* quantity = 1);
	
	private:
		void setDetailsToItemName();
};

#endif //CPU_H
