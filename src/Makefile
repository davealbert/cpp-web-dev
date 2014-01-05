CC=g++
CGI=/Applications/MAMP/cgi-bin/
OBJS=controller.o home.o

default: router

all: router home

router: router.cpp $(OBJS)
	$(CC) -o router.cgi $(OBJS) router.cpp -lcgicc
	cp router.cgi $(CGI)

home.o: home.cpp
	$(CC) -c home.cpp
	
controller.o: controller.cpp
	$(CC) -c controller.cpp

clean:
	rm *.o *.cgi

