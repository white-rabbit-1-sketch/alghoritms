#ifndef DOUBLY_QUEUE_H
#define DOUBLY_QUEUE_H

namespace alg {
    template <typename ValueType>
    class DoublyQueue {
        protected:
            

        public:
            virtual void append(LinkedListNode<LinkedListNodeType> &node);
            virtual LinkedListNode<LinkedListNodeType> *getFirstNode() const;
            virtual LinkedListNode<LinkedListNodeType> *getLastNode() const;
    };
}

#endif