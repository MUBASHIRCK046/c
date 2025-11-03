#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

struct node* insert(struct node*, int);
struct node* search(struct node*, int);
struct node* delete(struct node*, int);
void display(struct node*);

int main() {
    struct node* start = NULL;
    int item, opt;

    while (1) {
        printf("\n1.Insert\n2.Search\n3.Delete\n4.Display\n5.Exit\n");
        printf("Your option: ");
        scanf("%d", &opt);
        switch (opt) {
            case 1:
                printf("Item to insert: ");
                scanf("%d", &item);
                start = insert(start, item);
                break;
            case 2:
                printf("Item to search: ");
                scanf("%d", &item);
                if (search(start, item) == NULL)
                    printf("Not found...\n");
                else
                    printf("Found the number.\n");
                break;
            case 3:
                printf("Item to delete: ");
                scanf("%d", &item);
                start = delete(start, item);
                break;
            case 4:
                display(start);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid option!\n");
        }
    }
    return 0;
}

struct node* insert(struct node* s, int data) {
    struct node* t = (struct node*)malloc(sizeof(struct node));
    t->data = data;
    t->left = NULL;
    t->right = s;
    if (s != NULL)
        s->left = t;
    return t;
}

void display(struct node* s) {
    if (s == NULL) {
        printf("List is empty.\n");
        return;
    }
    while (s != NULL) {
        printf("%d ", s->data);
        s = s->right;
    }
    printf("\n");
}

struct node* search(struct node* s, int data) {
    while (s != NULL && s->data != data)
        s = s->right;
    return s;
}

struct node* delete(struct node* s, int data) {
    struct node* t = search(s, data);
    if (t == NULL) {
        printf("Not found...\n");
        return s;
    }
    if (t == s)
        s = t->right;
    if (t->left != NULL)
        t->left->right = t->right;
    if (t->right != NULL)
        t->right->left = t->left;
    free(t);
    printf("Item deleted.\n");
    return s;
}
