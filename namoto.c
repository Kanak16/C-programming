#include<stdio.h>
int main()
{
    int a,i,b;
    printf("Enter number:");
    scanf("%d",&a);

    scanf("%d",&b);

    for(i=1; i<=10; i++)
    {
        printf(" %d * %d = %d\t" ,a,i, a * i);
        printf(" %d * %d = %d\n" ,b,i, b * i);
    }
    getch();
}
