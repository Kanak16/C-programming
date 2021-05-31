#include<stdio.h>
int main()
{
    int a,i, sum=0;
    printf("Enter numer:");
    scanf("%d",&a);
    printf("1^2 + 2^2 + 3^2........%d",a);      //1^2 + 3^2 + 5^2

    for(i=1; i<=a; i=i+1)             // i=1; i<=a; i=i+2
    {
        sum=sum+i*i;
    }

    printf("=%d\n",sum);
    getch();
}
