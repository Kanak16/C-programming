#include<stdio.h>
int main()
{
    int first=0,second=1,n,fibo,count=0;

    printf("Enter any number :");
    scanf("%d",&n);


    while(count<n)
    {
        if(count<=1)
        {
            fibo=count;
        }

        else
        {
            fibo=first+second;
            first=second;
            second=fibo;
        }
        printf("%d\t",fibo);
        count++;
    }


}
