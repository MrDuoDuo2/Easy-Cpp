//
// Created by zyx on 2020/12/12.
//

#include <cstdio>
#include <cstdlib>
#include "../include/list.h"


 void list_init(list_t *list) {
    list->head = NULL;
}

static list_node_t *new_node(void *data) {
    list_node_t *node = (list_node_t *) malloc(sizeof(list_node_t));
    node->data = data;
    node->next = NULL;
    return node;
}

 void list_push_back(list_t *list, void *data) {
    list_node_t *head = list->head;
    list_node_t *node = new_node(data);

    if (head) {
        // go to the last node
        for (; head->next; head = head->next);

        head->next = node;
    } else {
        list->head = node;
    }
}

 void list_free(list_t *list) {
    list_node_t *node = list->head;
    list_node_t *tmp;

    while (node) {
        tmp = node;
        node = node->next;

        free(tmp);
    }

    free(list);
}

list_node_t *list_get(list_t *list, size_t index) {
list_node_t *node = list->head;
size_t n = 0;

while (node) {
if (n == index) {
return node;
}

n++;
node = node->next;
}

return (list_node_t *)NULL;
}

 size_t list_size(list_t *list) {
list_node_t *node = list->head;
int n = 0;

while (node) {
n++;
node = node->next;
}

return n;
}

 list_node_t *list_first(list_t *list) {
list_node_t *result = NULL;

if (list) {
result = list_get(list, 0);
}

return result;
}

 list_node_t *list_last(list_t *list) {
list_node_t *result = NULL;

if (list) {
const size_t len = list_size(list);
result = list_get(list, len - 1);
}

return result;
}

#ifdef __cplusplus

#endif
