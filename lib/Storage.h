#pragma once

#ifndef STORAGE_H
#define STORAGE_H

class Storage {
	public:
		char* type;
		char* size;
		char* rwSpeed;
		char* modal;
		
	public:
		Storage(char* type, char* size, char* rwSpeed, char* modal = new char('\0'));
		
	private:
		setDetailsToItemName();
};

#endif //STORAGE_H
