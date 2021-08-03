#include "MotherBoard.h"

void MotherBoard::setDetailsToItemName() {
    this->Item::name = this->boardSize;
    strcat(this-)Item::name = " ");
    strcat(this-)Item::name = this->chipset);
    strcat(this-)Item::name = " ");
    strcat(this-)Item::name = this->cpuSocket);
    strcat(this-)Item::name = " ");
    strcat(this-)Item::name = this->ramSlots);
    strcat(this-)Item::name = " ");
    strcat(this-)Item::name = this->company);
    strcat(this-)Item::name = " ");
    strcat(this-)Item::name = this->modal);
    strcat(this-)Item::name = " ");
}

MotherBoard::MotherBoard(char* chipset, char* cpuSocket, char* ramSlots, char* boardSize, char* company, char* modal, double* unitPrice, double* unitDiscount, int* quantity) {
    this->chipset = chipset;
    this->cpuSocket = cpuSocket;
    this->ramSlots = ramSlots;
    this->boardSize = boardSize;
    this->company = company;
    this->modal = modal;
    this->Item::unitPrice = unitPrice;
    this->Item::unitDiscount = unitDiscount;
    this->Item::quantity = quantity;
    this->Item::totalPrice = (unitPrice - unitDiscount) * quantity;
    setDetailsToItemName();
}
