#include "Employee.h"

Employee::Employee(char* name, char* contact, char*cnic, char* address, double* basicSalary, double* incentives, double* totalSalary) {
	this->Person::name = name;
	this->Person::contact = contact;
	this->Person::cnic = cnic;
	this->Person::address = address;
	this->basicSalary = basicSalary;
	this->incentives = incentives;
	this->totalSalary = totalSalary;
}

Employee::Employee(char* name) {
	this->Person::name = name;
}

Employee* Employee::getInstance(char* name, char* contact, char* cnic, char* address, double* basicSalary, double* incentives, double* totalSalary) {
	if (instance == NULL) {
		instance = new Employee(name,contact,cnic,address,basicSalary,incentives,totalSalary);
		return instance;
	}
	instance->Person::name = name;
	instance->Person::contact = contact;
	instance->Person::cnic = cnic;
	instance->Person::address = address;
	return instance;
}

Employee* Employee::getInstance(char* name) {
	if (instance == NULL) {
		instance = new Employee(name);
		return instance;
	}
	instance->Person::name = name;
	return instance;
}

Employee* Employee::getInstance() {
	if (instance != NULL) {
		return instance;
	}
}

Employee* Employee::instance = NULL;


