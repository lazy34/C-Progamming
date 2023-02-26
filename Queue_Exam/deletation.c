#include < stdio.h > 
#include < stdlib.h >

struct node {
    int data;
    struct node * next;
};

struct node * front;
struct node * rea

void deleteNode(struct node * ptr) {
    if (front == NULL) {
        printf("Underflow");
        return;
    } else {
        ptr = front;
        front = front - > next;
        free(ptr);
    }
}

int main() {
    struct node * head = NULL;
    insert(head, 10);
    insert(head, 20);

    printf("front element: %d\n", front - > data);
    deleteNode(head);
    printf("front element: %d", front - > data);
    return 0;
}
