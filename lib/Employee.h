#pragma once

#include "Person.h"
#ifndef Employee_h
#define Employee_h

class Employee : public Person {
	public:
		double* basicSalary;
		double* incentives;
		double* totalSalary;
	private:
		static Employee* instance;
		Employee(char* name, char* contact, char* cnic, char* address, double* basicSalary, double* incentives, double* totalSalary);
		Employee(char* name);
		
	public:
		static Employee* getInstance();
		static Employee* getInstance(char* name);
		static Employee* getInstance(char* name, char* contact, char* cnic, char* address, double* basicSalary, double* incentives, double* totalSalary);
};

#endif //Employee
