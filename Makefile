CC = gcc
CFLAGS  = -g -Wall
BUILD_DIR = ./build

default: main

main:  linked_list.o doubly_linked_list.o main.o
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/main $(BUILD_DIR)/linked_list.o $(BUILD_DIR)/doubly_linked_list.o $(BUILD_DIR)/main.o

linked_list.o:  linked_list.c linked_list.h color.h
	$(CC) $(CFLAGS) -c linked_list.c -o $(BUILD_DIR)/linked_list.o

doubly_linked_list.o:  doubly_linked_list.c doubly_linked_list.h linked_list.h color.h
	$(CC) $(CFLAGS) -c doubly_linked_list.c -o $(BUILD_DIR)/doubly_linked_list.o

main.o:  main.c linked_list.h doubly_linked_list.h color.h console.h
	$(CC) $(CFLAGS) -c main.c -o $(BUILD_DIR)/main.o


clean: 
	$(RM) /build/*