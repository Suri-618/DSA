#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
}; 
struct node* head=NULL;
void insert_at_head(int val)
{
    struct node* newnode= (struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=head;

    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        newnode->next=head;
        head=newnode;
    }
}
void insert_at_tail(int val)
{
    struct node* newnode= (struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=NULL;

    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        struct node* temp=head;
        
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void display()
{
    struct node* temp=head;
    if(head==NULL)
    {
        printf("There is no element in the list\n");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
void delete_at_head()
{
    if(head==NULL)
    {
        printf("There is no element in the list\n");
    }
    else
    {
        struct node* del_node= head;
        head=head->next;
        free(del_node);
    }
}
void delete_at_tail()
{

        struct node* temp=head;
        
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=NULL;
}
void search(int val)
{
    struct node* temp=head;
    int key=0;
    while(temp!=NULL)
    {
        if(temp->data==val)
        {
            key=1;
            break;
        }
        temp=temp->next;
    }
    if(key==1)
    {
        printf("Element found\n");
    }
    else
    {
        printf("Element not found\n");
    }
}
void get_node_count()
{
    struct node* temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    printf("The number of nodes in the list is %d\n",count);
}
void insert_at_position(int val,int pos)
{
    struct node* newnode= (struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=NULL;
    struct node* temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        if(count==pos-1)
        {
            newnode->next=temp->next;
            temp->next=newnode;
            break;
        }
        temp=temp->next;
    }
}
int main()
{
    int n;
    printf("Enter\n1.Insert at Head\n2.Insert at Tail\n3.Display\n4.Delete at head\n5.Delete at tail\n6.Search_element\n7.get_node_count\n8.insert_at_position\nAny other key to exit:\n");
    while(1)
    {
        printf("Enter your choice:\n");
        scanf("%d",&n);
        if(n==1)
        {
            int val;
            printf("Enter the value to be inserted at head:\n");
            scanf("%d",&val);   
            insert_at_head(val);
        }
        else if(n==2)
        {
            int val;
            printf("Enter the value to be inserted at tail:\n");
            scanf("%d",&val);   
            insert_at_tail(val);
        }
        else if(n==3)
        {
            display();
        }
        else if(n==4)
        {
            delete_at_head();
        }
        else if(n==5)
        {
            delete_at_tail();
        }
        else if(n==6)
        {
            int val;
            scanf("%d",&val);   
            search(val);
        }
        else if(n==7)
        {
            get_node_count();
        }
        else if(n==8)
        {
            int val,pos;
            scanf("%d",&val);
            scanf("%d",&pos);
            insert_at_position(val,pos);
        }
        else
        {
            printf("Thank you\n");
            break;
        }
    }
}