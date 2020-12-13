//
// Created by zyx on 2020/12/12.
//

#ifndef EASY_CPP_LIST_H
#define EASY_CPP_LIST_H


typedef struct list_node {
    void *data;
    struct list_node *next;
} list_node_t;

typedef struct list {
    list_node_t *head;
} list_t;

 void list_init(list_t *list);

 list_node_t *list_get(list_t *list, size_t);

 void list_push_back(list_t *list, void *data);

 void list_free(list_t *list);

 size_t list_size(list_t *list);

 list_node_t *list_first(list_t *list);

 list_node_t *list_last(list_t *list);

#ifdef __cplusplus

#endif

#endif //EASY_CPP_LIST_H