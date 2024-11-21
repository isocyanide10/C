#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next,*prev;
};
int main()
{

    int n;
    printf("Enter the number of nodes : ");
    scanf("%d",&n);
    struct node *head=NULL,*tail=NULL,*newnode=NULL,*prev=NULL,*ii=NULL;
    for(int i=0;i<n;i++)
    {
        newnode=malloc(sizeof(struct node ));
        printf("Enter the %d element : ",i+1);
        scanf("%d",&newnode->data);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            head->next = NULL;
            head->prev = NULL;
        }
        else
        {
            tail->next=newnode;
            newnode->prev = tail;
            tail=newnode;
            tail->next=NULL;
        }

    }
    for(ii=head;ii!=NULL;ii=ii->next)
    {
        printf("%d->",ii->data);
    }

printf("\n");
     for(ii=tail;ii!=NULL;ii=ii->prev)
    {
        printf("%d->",ii->data);
    }
    return 0;

}