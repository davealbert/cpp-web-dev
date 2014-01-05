CC=g++
CGI=/Applications/MAMP/cgi-bin/

all: get hello

get: get.cpp
	$(CC) -o get.cgi get.cpp -lcgicc
	cp get.cgi $(CGI)

hello: hello.cpp
	$(CC) -o hello.cgi hello.cpp -lcgicc
	cp hello.cgi $(CGI)


