#include<stdio.h>
int main()
{
    char s1[]="kanak \
    sarker";
    int i=0;
    while(s1[i]!='\0')
    {
        printf("%c\n",s1[i]);
        i++;
    }
}
