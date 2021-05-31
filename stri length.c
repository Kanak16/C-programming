/*#include<stdio.h>
int main()
{
    char s1[]="Kanak sarker";
    int a=strlen(s1);

    printf("Enter the :%d",a);
}
*/
#include<stdio.h>
int main()
{
    char s1[]="Kanak sarker";
    int i=0,length=0;
    while(s1[i]!='\0')
    {
        i++;
        length++;
    }
    printf("Length=%d\n",length);
}
