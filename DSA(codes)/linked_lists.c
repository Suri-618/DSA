#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *n1 =(struct node *)malloc(sizeof(struct node));
    n1->data = 10;
    n1->next =NULL;
    struct node *n2 =(struct node *)malloc(sizeof(struct node));
    n2->data = 20;
    n2->next =NULL;
    struct node *n3 =(struct node *)malloc(sizeof(struct node));
    n3->data = 30;
    n3->next =NULL;

    n1->next =n2;
    n2->next =n3;
    printf("Node-1 value %d\n",n1->data);
    printf("Node-2 value %d\n",n1->next->data);
    printf("Node-3 value %d\n",n1->next->next->data);
    return 0;


}