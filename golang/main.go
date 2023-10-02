package main

import "fmt"

func main() {
	hashTable := NewHashTable(10)

	hashTable.Set("test", 2)
	hashTable.Set("test", 1)
	hashTable.Set("test3", 3)

	fmt.Println(fmt.Sprintf("Hash table test value is: %d", hashTable.Get("test")))
	fmt.Println(fmt.Sprintf("Hash table test3 value is: %d", hashTable.Get("test3")))

}
