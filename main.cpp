#include "./lib/Customer.h"
#include "./lib/Employee.h"
#include "./lib/Item.h"
#include <iostream>
#include <limits>

int main(char* argc, char* argv[]) {
	Person* employee = Employee::getInstance("");
	Person* customer = Customer::getInstance(new char('\0'), new char('\0'), new char('\0'), new char('\0') );
	
	
	
	return 0;
}
