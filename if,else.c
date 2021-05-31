#include<stdio.h>
int main()
{
    int time;

    printf("Enter any time : ");
    scanf("%d",&time);


    if(time==8)
    {
        printf("Godd morning\n");
        printf("Kanak Chandra\n");
        printf("Thanks\n");
    }



    else if(time<=11)
    {
    printf("breakfast time\n");
    printf("Thanks");
    }
    else
    {
        printf("Working time");
    }

    getch();
}
