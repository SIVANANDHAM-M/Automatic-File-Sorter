#include<stdio.h>
#include<stdlib.h>
 void print(int list[],int n);
int insert_at_begin(int list[],int n);
int insert_at_end(int list[],int n);
int delete_at_begin(int list[],int n);
int delete_at_end(int list[],int n);
int insert_at_pos(int list[],int n);
int delete_at_pos(int list[],int n);
int insert_at_after(int list[],int n);
int delete_at_after(int list[],int n);
int insert_at_before(int list[],int n);
int delete_at_before(int list[],int n);
int insert_at_before(int list[],int n)
{int ele,pos,i;
    printf("\nenter the element:");scanf("%d",&ele);
    printf("\nenter teh pos:");scanf("%d",&pos);
     for(i=n;i>=pos;i--)
    {
        list[i]=list[i-1];
    }list[pos-1]=ele;
    printf("after inserting after at the desired position:");n++;print(list,n);return n;


}
int delete_at_before(int list[],int n)
{
     int i,pos;
   printf("\nenter teh pos:");scanf("%d",&pos);
   for(i=pos-1;i<n;i++)
   {
    list[i]=list[i+1];
   }
   printf("after deleting  after at the desired position:");print(list,n-1);return n-1;

}
int insert_at_after(int list[],int n)
{int ele,pos,i;
    printf("\nenter the element:");scanf("%d",&ele);
    printf("\nenter teh pos:");scanf("%d",&pos);
     for(i=n;i>pos+1;i--)
    {
        list[i]=list[i-1];
    }list[pos+1]=ele;
    printf("after inserting after at the desired position:");n++;print(list,n);return n;
}

int delete_at_after(int list[],int n){
     int i,pos;
   printf("\nenter teh pos:");scanf("%d",&pos);
   for(i=pos+1;i<n;i++)
   {
    list[i]=list[i+1];
   }
   printf("after deleting  after at the desired position:");print(list,n-1);return n-1;


}
int insert_at_pos(int list[],int n)
{
    int i,ele,pos;
    printf("\nenter the element:");scanf("%d",&ele);
    printf("\nenter teh pos:");scanf("%d",&pos);
    for(i=n;i>pos;i--)
    {
        list[i]=list[i-1];
    }list[pos]=ele;
    printf("after inserting at the desired position:");n++;print(list,n);return n;

}
int delete_at_pos(int list[],int n)
{
     int i,pos;
   printf("\nenter teh pos:");scanf("%d",&pos);
   for(i=pos;i<n;i++)
   {
    list[i]=list[i+1];
   }
   printf("after deleting at the desired position:");n++;print(list,n-1);return n-1;

}

int delete_at_end(int list[],int n)
{ printf("\nafter deleting the end element:");print(list,n-1);return n-1;}
int delete_at_begin(int list[],int n)
{
    int i;
    for(i=0;i<n;i++){ list[i]=list[i+1];}
    printf("\nafter delete the first element:");print(list,n-1);
    return n-1;
}
int insert_at_end(int list[],int n)
{   int ele;
    printf("\nEnter the element to insert at the end:");scanf("%d",&ele);
    list[n]=ele;n++; print(list,n);
    return n;
}
 int insert_at_begin(int list[],int n)
{
    int i,ele;
    printf("enter the element to insert at begin:");scanf("%d",&ele);
    for(i=n;i>0;i--)
    {list[i]=list[i-1];}list[0]=ele; printf("\nafter inserting:");n++;
    print(list,n);return n;
}
void print(int list[],int n)
{ int i;printf("\nelements in the list:");
for(i=0;i<n;i++){printf(" %d",list[i]);}}
int main()
{
    int list[20], n,i,ch;
    printf("\nEnter the number of elements you want to update:");scanf("%d",&n);
    printf("List of elements:");
    for(i=0;i<n;i++){scanf("%d",&list[i]);}
    printf("\n1.to print:\n2.to insert at the begin:\n 3.to insert at the begin\n4.to delete at begin:\n5.to delete at end: ");
    printf("\n6.insert at required pos\n7.delete at required pos:");
     printf("\n8.insert at  after required pos\n9.delete at after required pos:");
    printf("\n10.insert at  before required pos\n11.delete at before required pos:");
     printf("\nenter the choice:");
    scanf("%d",&ch);
    do
    {
    switch(ch)
    {
        case 1: print(list,n);break;//to print
        case 2:n=insert_at_begin(list,n); break;
        case 3:n=insert_at_end(list,n);break;
        case 4:n=delete_at_begin(list,n); break;
        case 5:n=delete_at_end(list,n);break;
        case 6:n=insert_at_pos(list,n);break;
        case 7:n=delete_at_pos(list,n);break;
        case 8:n=insert_at_after(list,n);break;
        case 9:n=delete_at_after(list,n);break;
        case 10:n=insert_at_before(list,n);break;
        case 11:n=delete_at_before(list,n);break;
        default: printf("\nInvalid respose");break;

    }printf("\nenter the choice:");
    scanf("%d",&ch);
    }while(ch<12);
    return 0;



}