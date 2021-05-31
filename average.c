#include<stdio.h>
int main()
{
    int a,b,sum ,res;
    float avg;
    printf ("Enter two value:");
    scanf("%d %d",&a,&b);
    res=a-b;

    printf("Mainus : %d-%d=%d\n", a,b,res);

    res=a*b;

    printf("Mul : %d*%d=%d\n", a,b,res);
    res=a/b;

    printf("Divided : %d/%d=%d\n", a,b,res);

    res=a%b;

    printf("mudulas :=%d\n",res);

    sum=a+b;

    printf("Sum : %d+%d=%d\n", a,b,sum);


    avg=(float)sum/2;     //here sum type change ,so it is type casting;
    printf("Average=%.1f\n",avg);

    getch();
}
