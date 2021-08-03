#include "CPU.h"

void CPU::setDetailsToItemName() {
	this->Item::name = this->company;
	this->Item::name += " ";
	this->Item::name += this->series;
	this->Item::name += " ";
	this->Item::name += this->generation;
	this->Item::name += " [{ ";
	this->Item::name += this->frequency;
	this->Item::name += " } ";
	this->Item::name += this->cache;
	this->Item::name += " ] ( ";
	this->Item::name += this->modal;
	this->Item::name += " )";
}
CPU::CPU(char* company, char* series, char* generation,char* frequency, char* cache, char* modal = new char('\0')) {
	this->company = company;
	this->series = series;
	this->generation = generation;
	this->frequency = frequency;
	this->cache = cache;
	this->modal = modal;
	this->setDetailsToItemName();
}
