#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node * next;
}node;

node * createLinkedList(int n);

int main(){
    int n = 0;
    node * HEAD = NULL;
    printf("\nHow many nodes");
    scanf("%d", &n);
    HEAD = createLinkedList(n);


    return 0;
}

node * createLinkedList(int n){
    int i = 0;
    node * head = NULL;
    node * temp = NULL;
    node * p = NULL;
    
    for (i = 0; i < n; i++)
    {   
        //creating the individual isolated node
        temp = (node*)malloc(sizeof(node));
        printf("\nEnter the data for node number: ", i+1);
        scanf("%d", &(temp->data));
        temp->next = NULL;

        if(head == NULL){//if list is empty, then the temp becomes the head
            head = temp;
        }
        else{
            n = head;
            while (p->next != NULL)
                p = p->next;
            p->next = temp;
        }
    }   
    return head;
}