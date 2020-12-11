//
// Created by Luo on 11/12/2020.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linked_list.h"

LN *creat_list(data_t data)
{
    LN *node = NULL;
    node = (LN *)malloc(sizeof(LN));
    if (node == NULL)
        printf("Malloc fail!\n");

    memset(node, 0, sizeof(LN));
    node->data = data;
    node->next = NULL;

    return node;
}

void tail_insert(LN *header, LN *new)
{
    LN *p = header;
    while (p->next != NULL) {
        p = p->next;
    }
    p->next = new;
}

void top_insert(LN *header, LN *new)
{
    /*
     * header is not a list node, but points to the first node
     */
    LN *p = header;
    /*
     * header -> [node1|0] -> [node2|1] -> Null
     */
    new->next = p->next;
    p->next = new;
}

void traverse_linked_list(LN *header)
{
    LN *p = header;
    p = p->next;

    while (p->next != NULL) {
        printf("%d-", p->data);
        p = p->next;
    }

    printf("%d", p->data);
}

void delete_list_node(LN *header)
{
    LN *p = header;

}

void linked_list_demo(void)
{
    LN *node_1 = creat_list(100);
    printf("%d-", node_1->data);
    free(node_1);
}