#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int compare(const void *a,const void *b)
{
    return strcmp(*(const char**)a,*(const char**)b);
}
int main()
{
     const char *arr[]={"banana","apple","zero","hari"};int n=4;
    qsort(arr,n,sizeof(char*),compare);
    printf("\nqsort:");
    for(int i=0;i<n;i++)
    {
        printf("\n\t%s",arr[i]);
    }
    return 0;

}