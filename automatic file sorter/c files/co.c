#include<stdio.h>
#define N 5
int arr[N];
int front=-1;
int rear=-1;
void enqueue()
{
    if(rear==-1||front==-1)
    {
       front=rear=0;int ele;
        printf("\n enter the element:");scanf("%d",&ele);
        arr[rear]=ele;
    }
    else if((rear+1)%N==front) printf("circular queue is full");
    else
    {
        int ele;
        printf("\n enter the element:");scanf("%d",&ele);
        rear=(rear+1)%N;
        arr[rear]=ele;
        printf("\n%d is enqueueed",ele);
     }
}
void dequeue()
{
    if(rear==-1||front==-1) printf("\nqueue is empty...");
    else if (rear==front) front=rear=-1;
    else
    {
        front++;
        printf("\n successfully deleted...");
    }
}
void display()
{
    int i;printf("\n queue:");
    for(i=front;i<=rear;i++)
    {
        printf("\t%d",arr[i]);
    }
}
void exit()

{
    printf("\n exitng.......");
}
int main()
{
    int ch,c;
    do
    {
        printf("\n1.enqueue \n2. dequeue\n3.didplay\n4.exiting");
        printf("\nchoose your choice:");scanf("%d",&ch);
        switch(ch)
        {
            case 1: enqueue();break;
            case 2: dequeue(); break;
            case 3:display(); break;
            case 4: exit();break;
            default: printf("\n Invalid choice");
        }
        printf("\n do you want to continue.....(press 1)");scanf("%d",&c);

    }while(c==1);
}
