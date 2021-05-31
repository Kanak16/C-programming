#include<stdio.h>
int main()
{
   char num;


    printf("Enter the Latter:");
    scanf("%c",&num);

    if(num=='a' || num=='e' || num=='i' || num=='o' || num=='u' || num=='A' || num=='E' || num=='I' || num=='O' || num=='U')
    {
        printf("Vowel: %c",num);
    }
   else if(num=='a' || num=='e' || num=='i' || num=='o' || num=='u' || num=='A' || num=='E' || num=='I' || num=='O' || num=='U')
    {
        printf("Vowel: %c",num);
    }

    else
    printf(" Others: %c",num);


    getch();
}
