#include<stdio.h>
#include<stdlib.h>
struct node
{
    char data;
    struct node *next;
};
int main()
{
    struct node *n1 =(struct node *)malloc(sizeof(struct node));
    n1->data = 'H';
    n1->next =NULL;
    struct node *n2 =(struct node *)malloc(sizeof(struct node));
    n2->data = 'O';
    n2->next =NULL;
    struct node *n3 =(struct node *)malloc(sizeof(struct node));
    n3->data = 'L';
    n3->next =NULL;
    struct node *n4 =(struct node *)malloc(sizeof(struct node));
    n4->data = 'O';
    n4->next =NULL;
    struct node *n5 =(struct node *)malloc(sizeof(struct node));
    n5->data = 'H';
    n5->next =NULL;
    n1->next =n2;
    n2->next =n3;
    n3->next =n4;
    n4->next =n5;
    printf("Node-1 value %c\n",n1->data);
    printf("Node-2 value %c\n",n1->next->data);
    printf("Node-3 value %c\n",n1->next->next->data);
    printf("Node-4 value %c\n",n1->next->next->next->data);
    printf("Node-5 value %c\n",n1->next->next->next->next->data);
    struct node *temp =n1;
    while(temp !=NULL)
    {
        printf("%c ",temp->data);
        temp=temp->next; 
    }
    return 0;
}