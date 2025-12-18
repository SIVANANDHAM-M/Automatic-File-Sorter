//listreverseusingSL.c
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int a;
    struct node* link;
};
struct node* head=NULL;
 
void insert_atbegin(int ele)
{
    
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    new_node->a=ele;
    if(head==NULL)
    {
        new_node->link=NULL;
        head=new_node;
        printf("\ninsert at the begin suceesfully at the empty list..");
    }
    else
    {
        new_node->link=head;
        head=new_node;
        printf("\ninsert at the bigin suceessfully at the non empty..");
    }
}
void display()
{
    struct node* temp=head;
    if(temp==NULL) {printf("\nlist is empty.");}
    else{
    while(temp!=NULL)
    {   
        printf("\t%d",temp->a);
        temp=temp->link;
    }}
}
void rev_display()
{
    struct node* prev=NULL;
    struct node* current=head;
    struct node* next=NULL;
    while(current!=NULL)
    {
        next=current->link;
        current->link=prev;
        prev=current;
        current=next;
    }
    head=prev;
    

}
 
int main()
{
    int ch,ele;
    do
    {
        printf("\n1.to insert");
        printf("\n3.reverse display");
        printf("\n2.ordinary display");
        printf("\n4.EXIT");
        printf("\nEnter your choice:");scanf("%d",&ch);
        switch(ch)
        {
            case 1: 
            {   printf("\nEnter the element to insert at begin:");scanf("%d",&ele);
            insert_atbegin(ele);
            break;}
            case 2:printf("\nbefore rversing:");display();break;
            case 3:printf("\nafter revesing:");rev_display();break;
           case 4:printf("\nexiting...");break;
           default:printf("\nINVALID OPTION");break;
        }

    }while(ch!=4);
    return 0;

}