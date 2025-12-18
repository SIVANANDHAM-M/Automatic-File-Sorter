2#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue()
{
    int ele;
    
    if(rear==N-1)
    {
        printf("queue overflow");
    }
    else if(front==-1&&rear==-1)
    {
         printf("\nenter the element:");scanf("%d",&ele);
        rear++;
        queue[rear]=ele;front++;
        printf("\n%d is enqueued....",ele);
    }
    else
    {
        printf("\nenter the element:");scanf("%d",&ele);
        rear++;
        queue[rear]=ele;
        printf("\n%d is enqueued....",ele);

    }
}
void dequeue()
{
    if(front>rear)
    {
        printf("\n queue is empty...");
    }
    else
    {   int ele;
        ele=queue[front];
        front++;
        printf("\n%d is dequeued...",ele);
    }
}
void display()
{
    int i;printf("\n queue:");
    for(i=front;i<=rear;i++)
    {
        printf("\t%d",queue[i]);
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
