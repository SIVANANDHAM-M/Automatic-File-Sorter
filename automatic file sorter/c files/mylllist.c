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
void insert_atend(int ele)
{
     struct node* temp=head;
     struct node* new_node=(struct node*)malloc(sizeof(struct node));
     new_node->a=ele;
     if(temp==NULL)
     {
        new_node->link=NULL;
        head=new_node;
         printf("\ninsert at the end suceesfully at the empty list..");
     }
     else
     {
     while(temp->link!=NULL)
     {
        temp=temp->link;
     }
     new_node->link=temp->link;
     temp->link=new_node;
     printf("\ninsert at the end suceesfully at the non empty list..");
    }
}
void insert_atpos(int ele,int pos)
{
     struct node* temp=head;
     struct node* new_node=(struct node*)malloc(sizeof(struct node));
     new_node->a=ele;
     if(temp==NULL){printf("\nlist is empty you cannot insert the elment in this way");}
     else{
     for(int i=1;i<pos-1;i++)
     {
        temp=temp->link;
     }
     new_node->link=temp->link;
     temp->link=new_node;
      printf("\ninsert at the suceesfully at the non empty list..");
    }
}
void insert_afterele(int ele,int posele)
{
    struct node* temp=head;
    int p,count=1;  
     while(temp!=NULL)
     {
        count++;
        if(temp->a==posele)
        {
            break;
        }
        temp=temp->link;
     }
     insert_atpos(ele,count);

}
void case5(int ele,int posele)
{
    int flag=0;
     struct node* temp=head;
       while(temp!=NULL)
     {
        
        if(temp->a==posele)
        {
            flag=1;
            break;
        }
        temp=temp->link;
     }
     if(flag==1)
     {
        insert_afterele(ele,posele);
     }
     if(flag==0)
     {
         insert_atend(ele);

     }

}
void delete_atbegin()
{
     struct node* temp=head;
     if(temp==NULL)
     {
        printf("\nempty list");
     }
     else
     {
     head=temp->link;
     free(temp);
     printf("\nfirst element deleted");
     }
}
void delete_atlast()
{
     struct node* temp=head;
     struct node* pre=NULL;
    if(temp==NULL)
     {
      printf("\nempty list");    
     }
     else
     {
     while(temp->link!=NULL)
     {
        pre=temp;
        temp=temp->link;
    }
    }
    
     free(temp);
     pre->link=NULL;
     printf("\nlast element deleted");
}
void delete_atgiven(int pos)
{
      struct node* temp=head;
      struct node* pre=NULL;
    if(temp==NULL){printf("\nlist is empty you cannot insert the elment in this way");}
     else
     {
     for(int i=1;i<pos;i++)
     {
        pre=temp;
        temp=temp->link;
     }
     
     pre->link=temp->link;
     free(temp);
      printf("\nat the given position element deleted");
    }
}
void delete_present(int ele)
{
     int flag=0;
     struct node* temp=head;
       while(temp!=NULL)
     {
        
        if(temp->a==ele)
        {
            flag=1;
            break;
        }
        temp=temp->link;
     }
     if(flag==1)
     {
         delete_atgiven(ele);
     }
      
}
void Retrieve(int pos)
{
    struct node* temp=head;
    for(int i=1;i<=pos-1;i++)
    {
        temp=temp->link;
    }
    printf("\nretrieve element:%d",temp->a);
}
int main()
{
    int ele,ch,pos,posele;
    do
    {
    printf("\n1. Insert a new element at the begining of the list");
    printf("\n2. Insert a new element at the end of the list");
    printf("\n3. Insert an element at the given position of the list  (ex: insert 30 in 3rd position)");
    printf("\n4. insert an element after the given position");
    printf("\n5. Insert a new element after the given element, if the given element is present in the list  otherwsie insert at end.");
    printf("\n6. Delete an element at given position");
    printf("\n7. Delete element after the given position.");
    printf("\n8. Delete the first element of the list");
    printf("\n9. Delete the last element of the list");
    printf("\n10 Delete the given element, if present");
    printf("\n11. Display all elements in the list");
    printf("\n12. Retrieve an element at the given postion");
    printf("\n13.EXIT");
    printf("\nEnter your choice:");scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        {   printf("\nEnter the element to insert at begin:");scanf("%d",&ele);
            insert_atbegin(ele);
            break;
        }
        case 2:
        {   printf("\nEnter the element to insert at begin:");scanf("%d",&ele);
            insert_atend(ele);
            break;
        }
        case 3:
        {
            printf("\nEnter the element to insert:");scanf("%d",&ele);
            printf("\nEnter the posititon to insert:");scanf("%d",&pos);
            insert_atpos(ele,pos);
            break;
        }
        case 4:
        {
            printf("\nEnter the element to insert:");scanf("%d",&ele);
            printf("\nEnter the element to insert after that:");scanf("%d",&posele);
            insert_afterele(ele,posele);
            break;
        }
        case 5:
        {   printf("\nEnter the element to insert:");scanf("%d",&ele);
            printf("\nEnter the element to insert after that:");scanf("%d",&posele);
            case5(ele,posele);
            break;
        }
         case 6:
         {
             printf("\nEnter the posititon to delete:");scanf("%d",&pos);
             delete_atgiven(pos);break;
         }

        case 7:
        {
            printf("\nEnter the posititon to delete:");scanf("%d",&pos);
             delete_atgiven(pos+1);break;
            break;}
        case 8:
        {
            delete_atbegin();
            break;
        }
        case 9:
        {
            delete_atlast();
            break;
        }
        case 10:
        {
            printf("\nEnter the element to delete if found:");scanf("%d",&ele);
            delete_present(ele);break;
        }
        case 11:printf("\nlist elements:");display();break;
        case 12:
        {
             printf("\nEnter the position to retrieve:");scanf("%d",&pos);
            Retrieve(pos);break;}
        case 13:printf("\nexiting....");return 0;break;
        default:printf("\n enter the valid option");
       }
    }while(ch!=14);
    return 0;
}