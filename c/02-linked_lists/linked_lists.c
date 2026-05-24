#include <stdio.h>

/*
    - We need to define where the list begins: head
    - We need to define the next node we link to
    - We might also want to define where the linked list ends: tail
    - Linked list nodes can be allocated anywhere in memory while an array is limited by that it needs to be a contiguous block of memory.
    -

    References:
        - https://www.youtube.com/watch?v=VOpjAHCee7c
*/

struct node {
    int x;
    struct node *next;
};
typedef struct node node_t;


int main() {

    node_t a, b, c;
    node_t *head;

    a.x = 10;
    b.x = 12;
    c.x = 14;
    printf("%d\n", a.x);

    head = &a;
    a.next = &b;
    b.next = &c;
    c.next = &c;
    printf("%d", head->x);


    return 0;
}
