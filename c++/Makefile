CC = g++
CFLAGS  = -g -Wall -std=c++17
BUILD_DIR = ./build

default: main

main: main.o sort.o array_helper.o
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/main $(BUILD_DIR)/main.o $(BUILD_DIR)/sort.o $(BUILD_DIR)/array_helper.o

main.o:  main.cpp
	$(CC) $(CFLAGS) -c main.cpp -o $(BUILD_DIR)/main.o

sort.o:  Sort.cpp
	$(CC) $(CFLAGS) -c Sort.cpp -o $(BUILD_DIR)/sort.o

array_helper.o:  ArrayHelper.cpp
	$(CC) $(CFLAGS) -c ArrayHelper.cpp -o $(BUILD_DIR)/array_helper.o


clean: 
	$(RM) /build/*