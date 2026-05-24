#include <stdio.h>

/*
    - Linked lists doesn't seem to be recommended as a primary data structure to store your data in modern computing.
        - Stumbled upon this which references one of Bjarne's talks: https://www.youtube.com/watch?v=cvZArAipOjo
        - It seems linked lists are used in very special cases today due to the inefficiency of how memory is
        scattered with linked lists compared to arrays and vectors. This seems to be the result of modern computers
        that use CPU Cache Memory which fetches a large chunk of memory at once, hence better for arrays/vectors as the data
        is assigned contiguously then. When using linked lists the data is scattered and will therefore miss out on the very
        fast CPU memory cache.
        - My take is that learning Link Lists might serve more as a learning tool to understand or get introduced to: pointers, trees/graphs, big-o

    - Based on the above findings: I will perform one basic exercise and study it.
        - We need to define where the list begins: head
        - We need to define the next node we link to
        - We might also want to define where the linked list ends: tail
        - Linked list nodes can be allocated anywhere in memory while an array is limited by that it needs to be a contiguous block of memory.
    -

    - References:
        - https://www.youtube.com/watch?v=VOpjAHCee7c
*/

struct node {
    int x;
    struct node *next;
};
typedef struct node node_t;

void printlist(node_t *head) {
    node_t *temporary = head;

    while (temporary != NULL) {
        printf("%d - ", temporary->x);
        temporary = temporary->next;
    }
    printf("\n");
}


int main() {

    node_t a, b, c;
    node_t *head;

    a.x = 10;
    b.x = 12;
    c.x = 14;

    head = &a;
    a.next = &b;
    b.next = &c;
    c.next = NULL;  // the last node in the linked list should point to NULL so that we know when to stop
    printf("%d\n", head->x);  // 10

    printlist(head); // 10 - 12 - 14 -

    // insert a new node between b and c
    node_t d;
    d.x = 15;
    d.next = &c;
    b.next = &d;

    //head = head->next;  // remove the first node by moving the head one node down/forward

    printlist(head);  // 10 - 12 - 15 - 14 -

    return 0;
}
