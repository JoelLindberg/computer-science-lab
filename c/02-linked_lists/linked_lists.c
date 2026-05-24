#include <stdio.h>
#include <stdlib.h>

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
            - Our example grows in this direction (latest node to be added is head)
        - We need to define the next node we link to: next
        - We could also define where the linked list ends: tail
            - We define the end of the list with NULL in the next pointer in this example
        - Linked list nodes can be allocated anywhere in memory while an array is limited by that it needs to be a contiguous block of memory.
    -

    - Followed and studied:
        - Jacob Sorber: https://www.youtube.com/watch?v=VOpjAHCee7c
*/

struct node {
    int x;
    struct node *next;
};
typedef struct node node_t;

void printList(node_t *head) {
    node_t *temporary = head;

    while (temporary != NULL) {
        printf("%d - ", temporary->x);
        temporary = temporary->next;
    }
    printf("\n");
}

node_t * createNewNode(int x) {
    node_t *result = malloc(sizeof(node_t));
    result->x = x;
    result->next = NULL;

    return result;
}

// utility - not a part of the foundational linking
node_t * findNode(node_t *head, int x) {
    node_t *tmp = head;
    while(tmp != NULL) {
        if (tmp->x == x) {
            return tmp;
        }
        tmp = tmp->next;
    }
    return NULL;
}

// utility - not a part of the foundational linking
void insertAfterNode(node_t *nodeToInsertBefore, node_t *newNode) {
    newNode->next = nodeToInsertBefore->next;
    nodeToInsertBefore->next = newNode;
}

int main() {
    node_t *head = NULL;  // the last node in the linked list should point to NULL so that we know when to stop
    node_t *tmp;

    for (int i=0; i < 10; i++) {
        tmp = createNewNode(i);
        tmp->next = head;
        head = tmp;
    }

    printList(head);

    tmp = findNode(head, 5);
    printf("Found node with value: %d\n", tmp->x);

    insertAfterNode(tmp, createNewNode(29));

    printList(head);

    return 0;
}
