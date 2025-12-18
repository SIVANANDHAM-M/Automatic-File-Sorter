 #include<stdio.h>

int main()
{
    int arr[10],n,i,j;

    printf("Enter the number of elements you want to store: ");
    scanf("%d",&n);

    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Duplicate elements: ");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d",arr[i]);
                break; // Avoid printing same duplicate multiple times
            }
        }
    }

    printf("\n");
    return 0;
}
