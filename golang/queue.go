package main

type Queue struct {
	nodeList []interface{}
}

func NewQueue() *Queue {
	return &Queue{
		nodeList: make([]interface{}, 0),
	}
}

func (q *Queue) Push(element interface{}) {
	q.nodeList = append(q.nodeList, element)
}

func (q *Queue) Pop() interface{} {
	var element interface{}

	if len(q.nodeList) > 0 {
		element = q.nodeList[len(q.nodeList)-1]
		q.nodeList = q.nodeList[:len(q.nodeList)-1]
	}

	return element
}

func (q *Queue) Count() int {
	return len(q.nodeList)
}
