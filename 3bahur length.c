#include<stdio.h>
int main()
{
   double s,a,b,c,area;
    printf("Enter tha value : ");
    scanf("%lf %lf %lf",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area:%.2lf",area);

    getch();
}
//3 bahuor lengh
