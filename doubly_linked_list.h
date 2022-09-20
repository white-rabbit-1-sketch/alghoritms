/*
 * Связанный двунаправленный список.
 * Все то же самое что и в односвязанном списке, но связи в обе стороны. Подробнее в файле linked_list.h
 */

#ifndef REBIRTH_DOUBLY_LINKED_LIST_H
#define REBIRTH_DOUBLY_LINKED_LIST_H

#include "linked_list.h"

typedef struct DoublyLinkedListNode {
    LinkedListNode *base;
    struct DoublyLinkedListNode *next_node;
    struct DoublyLinkedListNode *prev_node;
} DoublyLinkedListNode;

typedef struct DoublyLinkedList {
    DoublyLinkedListNode *first_node;
    DoublyLinkedListNode *last_node;
    const struct DoublyLinkedListInterface *vtable;
} DoublyLinkedList;

typedef struct DoublyLinkedListInterface {
    void (*add_node)(DoublyLinkedList *, DoublyLinkedListNode *);
    DoublyLinkedListNode *(*get_node)(DoublyLinkedList *, int *index);
    void (*show)(DoublyLinkedList *);
} DoublyLinkedListInterface;

DoublyLinkedList *doubly_linked_list_construct();
DoublyLinkedListNode *create_doubly_linked_list_node(char *name);

#endif
