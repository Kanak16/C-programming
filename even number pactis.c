#include<stdio.h>
int main()
{
    int sum=0 ,i, n;
    printf("Enter  number:");
    scanf("%d", &n);

    for(i=2; i<=n; i=i+2)
    {
        printf("%d\t",i);
        sum=sum+i;
    }
    printf("=  %d\n",sum);
    getch();
}
