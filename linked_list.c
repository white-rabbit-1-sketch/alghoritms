#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "linked_list.h"
#include "color.h"

static void linked_list_add_node(LinkedList *list, LinkedListNode *node) {
    if (!list->first_node) {
        list->first_node = node;
    } else {
        list->last_node->next_node = node;
    }

    list->last_node = node;
}

static void linked_list_show(LinkedList *list) {
    int i = 0;
    LinkedListNode *node = list->first_node;

    while (node) {
        i++;
        printf(ANSI_COLOR_BLUE "Node #%i:" ANSI_COLOR_CYAN " %s" ANSI_COLOR_RESET, i, node->name);

        node = node->next_node;
    }
}

static LinkedListNode *linked_list_get_node(LinkedList *list, int *index) {
    int i = 0;
    LinkedListNode *result_node;
    LinkedListNode *current_node = list->first_node;

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

LinkedList *linked_list_construct() {
    static const LinkedListInterface vtable = {
            linked_list_add_node, linked_list_get_node, linked_list_show
    };

    LinkedList *list = malloc(sizeof(LinkedList));
    list->vtable = &vtable;

    return list;
}

LinkedListNode *create_linked_list_node(char *name) {
    LinkedListNode *node = malloc(sizeof(LinkedListNode));
    node->name = strdup(name);

    return node;
}