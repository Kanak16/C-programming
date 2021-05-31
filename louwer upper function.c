/* input = A
output = a
*/

#include<stdio.h>
int main()
{
    char low,uppe;
    printf("Enter any Uppercas:");
    scanf("%c",&uppe);
    low=tolower(uppe);
    printf("Lower case is :%c",low);
    getch();
}
/* char low,uppe;
    printf("Enter any lower case:");
    scanf("%c",&low);
    uppe=tolower(low);
    printf("Uppercase is:%c",uppe);

    */
