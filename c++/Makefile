CC = g++
CFLAGS  = -g -Wall -std=c++11
BUILD_DIR = ./build

default: main

main: main.o
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/main $(BUILD_DIR)/main.o

main.o:  main.cpp
	$(CC) $(CFLAGS) -c main.cpp -o $(BUILD_DIR)/main.o


clean: 
	$(RM) /build/*