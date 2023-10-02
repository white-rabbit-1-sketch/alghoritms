package main

type HashTable struct {
	data []interface{}
}

func NewHashTable(size int) *HashTable {
	return &HashTable{
		data: make([]interface{}, size),
	}
}

func (s *HashTable) Set(key string, value interface{}) {
	s.data[s.getIndexByKey(key)] = value
}

func (s *HashTable) Get(key string) interface{} {
	return s.data[s.getIndexByKey(key)]
}

func (s *HashTable) getIndexByKey(key string) int {
	i := 0
	for _, char := range key {
		i += int(char)
	}

	return i % cap(s.data)
}
