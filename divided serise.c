#include<stdio.h>
int main()
{
    double sum=0,i,n;
    printf("Enter number:");
    scanf("%lf",&n);
    printf("1+1/2+1/3.....+1/%lf:",n);

    for(i=1; i<=n; i++)
    {
        sum=sum+(1/i);

        if(i==1)
            printf("\n1+");

        else if(i==n)
            printf("(1/%lf)",i);

        else
            printf("(1/%lf)+",i);

    }

    printf("=%f",sum);

    getch();
}
