#include<stdio.h>
int main()
{
    int i,n,factor=1;

    printf("Enter Postive number:");
    scanf("%d",&n);


    for(i=1; i<=n; i++)
    {
        factor=factor * i;
    }

        printf("Factorial=%d\n",factor);

    getch();
}
