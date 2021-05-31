#include<stdio.h>
int main()
{
    int a;
    printf("Enter any digit: ");
    scanf("%d",&a);


   switch(a)
    {
        case 0:
        printf("One");
        break;

        case 1:
        printf("one");
        break;

        case 2:
        printf("Two");
        break;

        case 3:
        printf("Three");
        break;

        case 4:
        printf("Four");
        break;


        case 5:
        printf("Five");
        break;


        case 6:
        printf("Six");
        break;


        case 7:
        printf("Seven");
        break;

        case 8:
        printf("Eight");
        break;

        default:
        printf("No number");
    }
}
