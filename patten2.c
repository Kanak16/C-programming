#include<stdio.h>
int main()
{
    int r,c,n;

    printf("enter number:");
    scanf("%d",&n);

    for(r=1; r<=n; r++)
    {
        for(c=1; c<=r; c++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for(r=n-1; r>=1; r--)
    {
        for(c=1; c<=r; c++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
