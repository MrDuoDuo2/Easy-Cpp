//
// Created by zyx on 2020/12/13.
//

#include <cstdio>
#include <cstring>
#include "../include/csv.h"
#include "../include/list.h"

void csv_parser(char *string,char *delimiter,list_t *list) {
    if (string == NULL || delimiter == NULL) {
        return;
    }

    char *token = strtok(string, delimiter);

    while (token) {
        list_push_back(list, (void *) token);
        token = strtok(NULL, delimiter);
    }
}