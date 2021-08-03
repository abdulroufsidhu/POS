#include "Customer.h"

Customer::Customer(char* name, char* contact, char* cnic, char* address) {
	this->Person::name = name;
	this->Person::name = contact;
	this->Person::name = cnic;
	this->Person::address = address;
}

Customer* Customer::getInstance(char* name, char* contact, char* cnic, char* address) {
	if (instance == NULL) {
		instance = new Customer(name,contact,cnic,address);
		return instance;
	}
	instance->Person::name = name;
	instance->Person::contact = contact;
	instance->Person::cnic = cnic;
	instance->Person::address = address;
	return instance;
}

Customer* Customer::instance = NULL;
