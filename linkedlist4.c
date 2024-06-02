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
    ptr=ptr->address;
    printf("NEXT VALUE of H is : %c",ptr->c);
}

void rev(struct havoc * ptr,struct havoc * head)
{
    ptr=ptr->radd;
    printf("PREVIOUS VALUE of H is : %c",ptr->c);
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

    show(second);
    printf("\n");
    rev(second,head);

    return 0;

    

}
