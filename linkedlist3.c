#include<stdio.h>
#include<stdlib.h>

struct havoc
{
    char c;
    struct havoc * address;
    struct havoc * radd;
};


void show(struct havoc * ptr)
{
    while(ptr!=NULL)
    {
       printf("%c\t",ptr->c);
       ptr=ptr->address;
    }
}

void rev(struct havoc * ptr,struct havoc * head)
{
    while(ptr!=head)
    {
       printf("%c\t",ptr->c);
       ptr=ptr->radd;
    }
}



int main(){
    struct havoc * head=(struct havoc *)malloc(sizeof(struct havoc));
    struct havoc * second=(struct havoc *)malloc(sizeof(struct havoc));
    struct havoc * third=(struct havoc *)malloc(sizeof(struct havoc));
    struct havoc * fourth=(struct havoc *)malloc(sizeof(struct havoc));


    head->c='A';
    head->address=second;
    head->radd=NULL;

    second->c='H';
    second->address=third;
    second->radd=head;

    third->c='S';
    third->address=fourth;
    third->radd=second;

    fourth->c='G';
    fourth->address=NULL;
    fourth->radd=third;

    show(third);
    printf("\n");
    rev(third,head);

    return 0;

    

}
