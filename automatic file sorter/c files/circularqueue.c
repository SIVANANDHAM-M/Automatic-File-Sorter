#include<stdio.h>
#include<stdlib.h>
struct node
{
    int a;
    struct node* link;
};
struct node* head=NULL;
void enque(int ele)
{
    struct node* temp=head;
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    new_node->a=ele; 
    if(head==NULL){head=new_node;new_node->link=new_node;}
    else{
     while(temp->link!=head)
     {
        temp=temp->link;
     }
    temp->link=new_node;new_node->link=head;}
    printf("\nelement enqueued..");
}
 void deque()
{
    if (head == NULL) {
        printf("\nQueue is empty..");
        return;
    }
 struct node* temp = head;
    if (head->link == head)
     {
        printf("\nElement dequeued: %d", head->a);
        free(head);
        head = NULL;
    }
    else 
    {
         
        struct node* last = head;
        while (last->link != head) {
            last = last->link;
        }printf("\nElement dequeued: %d", head->a);
        last->link = head->link;head = head->link;
        free(temp);
    }
}

void display()
{
     struct node* temp=head;
      if(temp==NULL)
     {
        printf("\nqueue is empty..");
     }
     else{
     do
     {
        printf("\t%d",temp->a);
        temp=temp->link;
     }while(temp!=head);}

}
int main()
{
    int ele,ch;
    do
    {
        printf("\n1.enque..");
        printf("\n2.deque..");
        printf("\n3.display..");
        printf("\n4.exit..");
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
    return 0;
}