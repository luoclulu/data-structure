//
// Created by Luo on 11/12/2020.
//

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef int data_t;

typedef struct list_node{
    data_t data;
    struct LN *next;
}LN;

void linked_list_demo(void);

#endif //DATA_STRUCTURE_LINKED_LIST_H
