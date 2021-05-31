#include<stdio.h>
int main()
{
    int i,sum=0,arr[100],n;
    printf("Enter the number:");
      scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }


    for(i=0; i<n; i++)
    {
        sum=sum+arr[i];
    }
    printf("%d\n",sum);
    printf("%.2f\n",(float)sum/n);
}
