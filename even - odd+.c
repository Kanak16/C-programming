#include<stdio.h>
int main()
{
    int i, n, even=0,odd=0;
    printf("Enter the last number:");
    scanf("%d",&n);

    printf("1-2+3-4....%d",n);

    for(i=1; i<=n; i++)
    {
        if(i%2==0)
            even=even+i;
        else
            odd=odd+i;
            }
            printf("=%d",odd-even);
            getch();
    }
