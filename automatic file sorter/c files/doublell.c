#include<stdio.h>
#include<stdlib.h>
struct node
{
    int a;
    struct node* next;
    struct node* prev;
};
struct node* head=NULL;
void enque(int ele)
{
    struct node* temp=head;
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    new_node->a=ele;
    if(head==NULL)
    {
        new_node->next=NULL;
        new_node->prev=NULL;
        head=new_node;
    }
    else
    {
         while(temp->next!=NULL)
         {
            temp=temp->next;
            
         }
             new_node->next=NULL;
             temp->next=new_node;
             new_node->prev=temp;
    }
    printf("\nelement enqued ");
}
void deque()
{   

struct node* temp=head;
     if(head==NULL){printf("\nqueue is empty");}
     else if(temp->next==NULL&&temp->prev==NULL)
     {
        head=NULL;free(temp);
     }
     else
     {
            temp=temp->next;
            free(head); 
             head=temp;
            temp->prev=NULL;
     }
      printf("\nelement dequed ");
}
void display()
{
     struct node* temp=head;
     while(temp!=NULL)
     {
        printf("\t%d",temp->a);
        temp=temp->next;
     }

}


int main()
{int ele;int ch;
    do
    {
    
    printf("\n1.enque:");
    printf("\n2.deque:");
    printf("\n3.display:");
    printf("\n4.EXIT;");
    printf("\nEnter the choice:");scanf("%d",&ch);
    switch(ch)
    {
    case 1:{printf("\nEnter the element:");scanf("%d",&ele);enque(ele);break;}
    case 2:deque();break;
    case 3:display();break;
    case 4:printf("\nExiting....");break;
    default:printf("\n INVALID OPTION");break;
    }
    }while(ch!=4);
return 0;}