#include<stdio.h>
int main()
{
    int num;
    float temp,tempcalculate;
    printf("Enter the Fahrenheit Case1\n");
   printf(" Enter the Celcius Case2\n");
    printf("Enter any case :");
    scanf("%d",&num);

    switch (num)
    {
        case 1:{
        printf("enter the Fahrenheit Value : ");
        scanf("%f",&temp);
        tempcalculate=(temp-32)/1.8;
        printf("Celcius Temperature:%f",tempcalculate);
        break;
        }
        case 2:
        {
        printf("enter the Celcius Value : ");
        scanf("%f",&temp);
        tempcalculate=(1.8*temp)/32;
        printf("Fahrenheit Temperature:%f",tempcalculate);
        }
        break;
        default:
        printf("Not a righ optation");
        break;
    }


        getch();
}
