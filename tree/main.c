#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node * left;
    struct node * right;
}node;

node * root;

node * insertinto(node *, int);

int main(){
    root = insertinto(root, 10);
    insertinto(root, 5);
    insertinto(root, 20);

    printf("%d\n", root->data);
    printf("left: %d\n", root->left->data);
    printf("right: %d\n", root->right->data);
}

node * insertinto(node * no, int val){
    if(no == NULL){
        no = (node*)malloc(sizeof(node));
        no->left = NULL;
        no->right = NULL;
        no->data = val;

        return no;
    }
    
    if(no->data > val){
        no->left = insertinto(no->left, val);
    }
    else if(no->data < val){
        no->right = insertinto(no->right, val);
    }
    else{
        printf("data already exists");
    }

    return no;
}