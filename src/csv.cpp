//
// Created by zyx on 2020/12/13.
//

#include <cstring>
#include "../include/csv.h"

void csv_parser(char *s, char *delimiter, list_t *list) {
    if (s == NULL || delimiter == NULL) {
        return;
    }

    char *token = strtok(s, delimiter);

    while (token) {
        list_push_back(list, (void *) token);
        token = strtok(NULL, delimiter);
    }
}