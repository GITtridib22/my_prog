// LINKED LIST CREATION and PRINTING ALL ELEMETS OF THE LIUNKEDLIST

//-----------------------------------------
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};
// Structure has been created

struct node * neww(struct node * h,int d)
{
   struct node * a=(struct node *)malloc(sizeof(struct node));
    a->data=d;
    a->next=h;

    return a;
}
void show(struct node * ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}


int main()
{
    struct node * head =(struct node *)malloc(sizeof(struct node));
    struct node * second =(struct node *)malloc(sizeof(struct node));
    struct node * third =(struct node *)malloc(sizeof(struct node));
    struct node * fourth =(struct node *)malloc(sizeof(struct node));
//allocated memory in heap for these four pointer of data type->stuct node

    head->data=40;
    head->next=second;

    second->data=50;
    second->next=third;

    third->data=60;
    third->next=fourth;

    fourth->data=70;
    fourth->next=NULL;
//assigning values and addresses of respective adjacent node to the pointers
    // now the show() function will print the linkedlist element one after the other:
    show(neww(head,99));

    return 0;
}
