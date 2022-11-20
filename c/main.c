#include <stdio.h>
#include "linked_list.h"
#include "doubly_linked_list.h"
#include "color.h"
#include "console.h"

int main() {
    char node_name[30];
    int i = 0;
    LinkedListNode *linked_list_node;
    DoublyLinkedListNode *doubly_linked_list_node;

    LinkedList *linked_list = linked_list_construct();
    DoublyLinkedList *doubly_linked_list = doubly_linked_list_construct();
    clrscr();

    while (1) {
        printf(ANSI_COLOR_GREEN "Please, enter the name of the node [1-30 letters]: " ANSI_COLOR_RESET);
        fgets(node_name, 30, stdin);

        /**
         * Linked list block
         */
        linked_list->vtable->add_node(linked_list, create_linked_list_node(node_name));
        clrscr();
        printf(ANSI_COLOR_YELLOW "-----------------------Linked list data-------------------------------------" ANSI_COLOR_RESET "\n");
        linked_list->vtable->show(linked_list);
        printf(ANSI_COLOR_YELLOW "-----------------------Search in linked list--------------------------------" ANSI_COLOR_RESET "\n");
        linked_list_node = linked_list->vtable->get_node(linked_list, &i);
        if (linked_list_node) {
            printf(ANSI_COLOR_GREEN "Node found: " ANSI_COLOR_CYAN "%s" ANSI_COLOR_RESET "\n", linked_list_node->name);
        } else {
            printf(ANSI_COLOR_RED "Node not found" ANSI_COLOR_RESET "\n");
        }
        printf(ANSI_COLOR_YELLOW "----------------------------------------------------------------------------" ANSI_COLOR_RESET "\n");

        /**
         * Doubly linked list block
         */
        doubly_linked_list->vtable->add_node(doubly_linked_list, create_doubly_linked_list_node(node_name));
        printf(ANSI_COLOR_YELLOW "-----------------------Doubly linked list data------------------------------" ANSI_COLOR_RESET "\n");
        doubly_linked_list->vtable->show(doubly_linked_list);
        printf(ANSI_COLOR_YELLOW "-----------------------Search in doubly linked list-------------------------" ANSI_COLOR_RESET "\n");
        doubly_linked_list_node = doubly_linked_list->vtable->get_node(doubly_linked_list, &i);
        if (doubly_linked_list_node) {
            printf(ANSI_COLOR_GREEN "Node found: " ANSI_COLOR_CYAN "%s" ANSI_COLOR_RESET "\n", doubly_linked_list_node->base->name);
        } else {
            printf(ANSI_COLOR_RED "Node not found" ANSI_COLOR_RESET "\n");
        }
        printf(ANSI_COLOR_YELLOW "----------------------------------------------------------------------------" ANSI_COLOR_RESET "\n");

        i++;
    }
}