#include<stdio.h>
int main()
{
    char s1[30]="kanak sarker";
    char s2[30];

    int i=0, len=0, j;

    while(s1[i]!='\0')
    {
        i++;
        len++;
    }

    for(j=0,i=len-1; i>=0; i-- ,j++)
    {
        s2[j]=s1[i];
    }

    s2[j]='\0';


    printf("String=  %s\n",s1);
    printf("String=  %s",s2);
}
