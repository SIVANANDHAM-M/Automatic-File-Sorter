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
    new_node->a=ele; new_node->link=NULL;
    if(temp==NULL){head=new_node;}
    else{
     while(temp->link!=NULL)
     {
        temp=temp->link;
     }
    temp->link=new_node;}
    printf("\nelement enqueued..");
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