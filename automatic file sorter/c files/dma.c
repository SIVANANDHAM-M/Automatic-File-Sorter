#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *x;
    printf("\n for malloc");
    x=(int*)malloc(5*sizeof(int));
    printf("\nenter the elements:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\nprint the elements:");
     for(int i=0;i<5;i++)
    {
        printf("%d",x[i]);
    }
    printf("\nfor calloc");
    int *arr;
    arr=(int*)calloc(5,sizeof(int));
    printf("\nenter the  array:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
     printf("\nprint the elements:");
     for(int i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n for realloc ");
    
    arr=(int*)realloc(arr,10*sizeof(int));
     printf("\nenter the elements:");
    for(int i=5;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
     printf("\nprint the elements:");
     for(int i=0;i<10;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n for the free");
    free(x);
    printf("\n x memory is sucessfully free");
    free(arr);
    printf("\n arr memory is successfully free");

    return 0;
}