payload : payload.o
	gcc -o payload payload.o

payload.o : payload.cpp
	gcc -o payload.o  payload.cpp
