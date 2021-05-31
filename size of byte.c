#include<stdio.h>
int main()
{
    int a;
    double b;
    char c;
    float d;

    printf("Int=%d byte\n",sizeof(a));
    printf("float=%d byte\n",sizeof(d));
    printf("double=%d byte\n",sizeof(b));
    printf("char=%d byte",sizeof(c));

    return 0;
}
