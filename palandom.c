#include<stdio.h>
int main()
{

    int num1,temp,r,sum=0;
    printf("Enter any number:");
    scanf("%d",&num1);

    temp=num1;

    while(temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }

   if(num1==sum)
   {
        printf("Palandom");
   }
   else
   printf("not Palandom");

    getch();


}

