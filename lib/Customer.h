#pragma once
#include "Person.h"
#ifndef Customer_h
#define Customer_h

class Customer : public Person {
	private:
		Customer(char* name, char* contact, char* cnic, char* address) ;
		static Customer* instance;
		
	public:
		static Customer* getInstance(char* name, char* contact, char* cnic, char* address);
};
#endif //Customer_h
