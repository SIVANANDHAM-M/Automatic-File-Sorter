#include<stdio.h>
#include<stdlib.h>
struct node
{
    int a;
    struct node* link;
};

    struct node* head=NULL;
void push(int ele)
{
    struct node* new_node=(struct node*)malloc (sizeof(struct node));new_node->a=ele;
    if(head==NULL){new_node->link=NULL;head=new_node;}
    else
    {
        new_node->link=head;
        head=new_node;
    }
    printf("\ngiven element pushed.");

}
void pop()
{   struct node* temp=head;
    if(head==NULL)
    {
        printf("\nstack is empty");
    }
    else
    {
        temp=temp->link;
        free(head);
        head=temp;

    }
}
void peek()
{ 
     printf("peek :%d",head->a);
}
void display()
{ 
     struct node* temp=head;
     while(temp!=NULL)
     {
        printf("\t%d",temp->a);
        temp=temp->link;
     }
}
int main()
{ 
    int ch,ele;
    do
    {
    printf("\n1.push");
    printf("\n2.pop");
    printf("\n3.peek");
    printf("\n4.display");
    printf("\n5.EXIT");
    printf("\nEnter the choice;");scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        { printf("\nEnter the element to push:");scanf("%d",&ele);push(ele);break;}
        case 2:pop();break;
        case 3:peek();break;
        case 4:display();break;
        case 5:printf("\nExiting....");break;
        default:
        printf("\nINVALID CHOICE");break;
    }}while(ch!=5);
    return 0;
}