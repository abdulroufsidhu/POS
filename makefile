PROG = "POS"
CC = g++
LIBDIR = lib/
FILES = main.cpp lib/Customer.cpp lib/Employee.cpp
CPPFLAGS = -g -Wall -I$(LIBDIR)
OUTPUT = -o pos.out
OBJS = main.o lib/customer.o lib/employee.o

#~ $(CC) $(CPPFLAGS) $(OUTPUT) $(FILES)

main.o:
	$(CC) -c $(CPPFLAGS) main.cpp
	
customer.o:
	$(CC) -c $(CPPFLAGS) $(LIBDIR)Customer.cpp
		
employee.o:
	$(CC) -c $(CPPFLAGS) $(LIBDIR)Employee.cpp

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)
	
clean:
	rm -f core $(PROG) $(OBJS)
