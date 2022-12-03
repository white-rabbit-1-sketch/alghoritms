CC = g++
CFLAGS  = -g -Wall -std=c++17 -pthread
BUILD_DIR = ./build

default: main

main: main.o array_helper.o sort.o search.o data_provider.o data_provider_logger_decorator.o singleton.o shm_storage.o thread_pool.o binary_tree.o binary_tree_node.o echo_server.o
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/main $(BUILD_DIR)/echo_server.o $(BUILD_DIR)/binary_tree_node.o $(BUILD_DIR)/binary_tree.o $(BUILD_DIR)/thread_pool.o $(BUILD_DIR)/shm_storage.o $(BUILD_DIR)/singleton.o $(BUILD_DIR)/data_provider.o $(BUILD_DIR)/data_provider_logger_decorator.o $(BUILD_DIR)/search.o $(BUILD_DIR)/array_helper.o $(BUILD_DIR)/sort.o $(BUILD_DIR)/main.o

main.o:  main.cpp
	$(CC) $(CFLAGS) -c main.cpp -o $(BUILD_DIR)/main.o

sort.o:  Sort.cpp ArrayHelper.hpp
	$(CC) $(CFLAGS) -c Sort.cpp -o $(BUILD_DIR)/sort.o

array_helper.o: ArrayHelper.cpp
	$(CC) $(CFLAGS) -c ArrayHelper.cpp -o $(BUILD_DIR)/array_helper.o

search.o: Search.cpp
	$(CC) $(CFLAGS) -c Search.cpp -o $(BUILD_DIR)/search.o

data_provider_logger_decorator.o: DataProviderLoggerDecorator.cpp
	$(CC) $(CFLAGS) -c DataProviderLoggerDecorator.cpp -o $(BUILD_DIR)/data_provider_logger_decorator.o

data_provider.o: DataProvider.cpp
	$(CC) $(CFLAGS) -c DataProvider.cpp -o $(BUILD_DIR)/data_provider.o

singleton.o: Singleton.cpp
	$(CC) $(CFLAGS) -c Singleton.cpp -o $(BUILD_DIR)/singleton.o

shm_storage.o: ShmStorage.cpp
	$(CC) $(CFLAGS) -c ShmStorage.cpp -o $(BUILD_DIR)/shm_storage.o

thread_pool.o: ThreadPool.cpp
	$(CC) $(CFLAGS) -c ThreadPool.cpp -o $(BUILD_DIR)/thread_pool.o

binary_tree.o: BinaryTree.cpp
	$(CC) $(CFLAGS) -c BinaryTree.cpp -o $(BUILD_DIR)/binary_tree.o

binary_tree_node.o: BinaryTreeNode.cpp
	$(CC) $(CFLAGS) -c BinaryTreeNode.cpp -o $(BUILD_DIR)/binary_tree_node.o

echo_server.o: EchoServer.cpp
	$(CC) $(CFLAGS) -c EchoServer.cpp -o $(BUILD_DIR)/echo_server.o

clean: 
	$(RM) /build/*