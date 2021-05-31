#include<stdio.h>
int main()
{
    int a;
    printf("Enter number:");
    scanf("%d",&a);

    if(a>=0)
    printf("Positve Number:%d",a);
    else
    printf("Negative Number:%d",a);

    getch();
}
