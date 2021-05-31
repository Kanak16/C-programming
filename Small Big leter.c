#include<stdio.h>
int main()
{
    char m;

    printf("Enter any latter :");
    scanf("%c",&m);

    if( m >= 'a'&& m <='z')
    {
        printf("small latter : %c",m);
    }

    else if( m >= 'A'&& m <='Z')
    {
        printf("Capital latter: %C",m);
    }
    else
    printf("No latter");

    getch();
}
