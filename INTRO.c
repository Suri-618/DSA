#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    int row;
    int col;
    struct node* next;
}Node;
Node* head=NULL;
void display()
{
    if(head==NULL)
    {
        printf("No Elements are in linked list");
    }
    else
    {
        Node* temp=head;
        while(temp!=NULL)
        {
            printf("Row:%d\tCol:%d\tData:%d\n",temp->row,temp->col,temp->data);
            temp=temp->next;
        }
    }
}
void insert_at_tail(int val,int r,int c)
{
    Node* newnode=(Node*)malloc(sizeof(Node));
    newnode->data=val;
    newnode->row=r;
    newnode->col=c;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        Node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void construct_sparse_matrix(int m, int n)
{
    Node* temp=head;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(temp->row==i && temp->col==j)
            {
                printf("%d ",temp->data);
                temp=temp->next;
            }
            else
            {
                printf("0 ");
            }
        }
    }
}

int main()
{   
    int m,n;
    printf("Enter the dimensions of the matrix\n");
    scanf("%d %d",&m,&n);
    int non_zero;
    printf("Enter the number of non-zero elements in the matrix\n");
    scanf("%d",&non_zero);
    for(int i=0;i<non_zero;i++)
    {
        int val,r,c;
        printf("Enter the value and the row and column of the element\n");
        scanf("%d %d %d",&val,&r,&c);
        insert_at_tail(val,r,c);
    }
    display();
    construct_sparse_matrix(m,n);
    return 0;
}