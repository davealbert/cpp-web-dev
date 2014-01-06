CC=g++
CGI=/Applications/MAMP/cgi-bin/
OBJS=controller.o home.o path.o errors.o

default: router

all: router

router: router.cpp $(OBJS)
	$(CC) -o router.cgi $(OBJS) router.cpp -lcgicc
	cp router.cgi $(CGI)

errors.o: errors.cpp
	$(CC) -c errors.cpp

path.o: path.cpp
	$(CC) -c path.cpp

home.o: home.cpp
	$(CC) -c home.cpp
	
controller.o: controller.cpp
	$(CC) -c controller.cpp

clean:
	rm *.o *.cgi

