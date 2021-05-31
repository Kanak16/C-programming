#include<stdio.h>
int main()
{
    float Base,height,Area;
    printf("Base:");
    scanf("%f",&Base);

    printf("Height:");
    scanf("%f",&height);

    Area=0.5*Base*height;

    printf("Area:%.2f\n",Area);

    getch ();

}
