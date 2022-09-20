#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "doubly_linked_list.h"
#include "color.h"

static void doubly_linked_list_add_node(DoublyLinkedList *list, DoublyLinkedListNode *node) {
    if (!list->first_node) {
        list->first_node = node;
    } else {
        list->last_node->next_node = node;
    }

    list->last_node = node;
}

static void doubly_linked_list_show(DoublyLinkedList *list) {
    int i = 0;
    DoublyLinkedListNode *node = list->first_node;

    while (node) {
        i++;
        printf(ANSI_COLOR_BLUE "Node #%i:" ANSI_COLOR_CYAN " %s" ANSI_COLOR_RESET, i, node->base->name);

        node = node->next_node;
    }
}

static DoublyLinkedListNode *doubly_linked_list_get_node(DoublyLinkedList *list, int *index) {
    int i = 0;
    DoublyLinkedListNode *result_node;
    DoublyLinkedListNode *current_node = list->first_node;

    while (current_node) {
        if (i == *index) {
            result_node = current_node;

            break;
        }

        current_node = current_node->next_node;
        i++;
    }

    return result_node;
}

DoublyLinkedList *doubly_linked_list_construct() {
    static const DoublyLinkedListInterface vtable = {
            doubly_linked_list_add_node, doubly_linked_list_get_node, doubly_linked_list_show
    };

    DoublyLinkedList *list = malloc(sizeof(LinkedList));
    list->vtable = &vtable;

    return list;
}

DoublyLinkedListNode *create_doubly_linked_list_node(char *name) {
    LinkedListNode *linked_list_node = malloc(sizeof(LinkedListNode));
    linked_list_node->name = strdup(name);

    DoublyLinkedListNode *doubly_linked_list_node = malloc(sizeof(DoublyLinkedListNode));
    doubly_linked_list_node->base = linked_list_node;

    return doubly_linked_list_node;
}