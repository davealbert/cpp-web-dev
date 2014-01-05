CC=g++
CGI=/Applications/MAMP/cgi-bin/

default: router

all: router home

router: router.cpp home
	$(CC) -o router.cgi home.o router.cpp -lcgicc
	cp router.cgi $(CGI)

home: home.cpp 
	$(CC) -c home.cpp
	

# This is historic for reference

get: get.cpp
	$(CC) -o get.cgi get.cpp -lcgicc
	cp get.cgi $(CGI)

hello: hello.cpp
	$(CC) -o hello.cgi hello.cpp -lcgicc
	cp hello.cgi $(CGI)


