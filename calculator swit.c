#include<stdio.h>
int main()
{
    double a , b ;
    char Operator;


    printf("Enter the operator(+,-,*,/):");
    scanf("%c",&Operator);

    printf("Enter two value :");
    scanf("%lf %lf",&a,&b);





    switch(Operator)
    {
    case '+':
    {
        printf("%lf + %lf = %lf",a,b, a+b);
    }
    break;

    case '-':
    {
        printf("%lf - %lf= %lf",a,b,a-b);
    }
    break;

    case '*':
    {
        printf("%lf * %lf=%lf",a,b,a*b);
    }
    break;

    case '/':
    {
        printf("%lf / %lf=%lf",a,b,a/b);
    }
    break;

    default:
        printf("Not posible");
    }
}
