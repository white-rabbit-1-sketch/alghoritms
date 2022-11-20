/*
 * Связанный однонаправленный список.
 * Имеет таблицу виртуальных методов (реализация ООП), которая хранится в отдельном контейнере, благодаря чему
 * в самоу структуре нет дополнительно потребляемой памяти (занимаем лишь лишние 8 байт на указатель в 64 битных системах).
 *
 * Таблица виртуальных методов содержит три метода:
 *  - на добавление в конец списка (Сложность: O(1))
 *  - поиск ноды по индексу (Сложность: O(n))
 *  - вывод все нод в аутпут (Сложность не имеет отношения к алгоритму)
 *
 *  Понятно, что тут можно было бы добавить еще методов, но тк сам список реализован в виде отдельной структуры,
 *  некоторая гибкость потерялась. Если избавиться от структуры то будем иметь все бонусы по скорости модификации
 *  элементов списка, но потеряем в удостве. Зависит от потребностей. Данная реализация такая.
 */

#ifndef REBIRTH_LINKED_LIST_H
#define REBIRTH_LINKED_LIST_H

typedef struct LinkedListNode {
    char *name;
    struct LinkedListNode *next_node;
} LinkedListNode;

typedef struct LinkedList {
    LinkedListNode *first_node;
    LinkedListNode *last_node;
    const struct LinkedListInterface *vtable;
} LinkedList;

typedef struct LinkedListInterface {
    void (*add_node)(LinkedList *, LinkedListNode *);
    LinkedListNode *(*get_node)(LinkedList *, int *index);
    void (*show)(LinkedList *);
} LinkedListInterface;

LinkedList *linked_list_construct();
LinkedListNode *create_linked_list_node(char *name);

#endif
