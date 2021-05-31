#include<stdio.h>
int main()

{
    int arr[100],n,arr2[100],i;

    printf("give nuber:");
    scanf("%d",&n);


    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("arr1:");


    for(i=0; i<n; i++)
    {
        printf("%d",arr[i]);
    }


    for(i=0; i<n; i++)
    {
        arr2[i]=arr[i];
    }



    printf("\narr2:");


    for(i=0; i<n; i++)
    {
        printf("%d",arr2[i]);
    }
}
