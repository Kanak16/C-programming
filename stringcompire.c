#include<stdio.h>
int main()
{
    char s1[]="kanak";
    char s2[]="kanak";

    int a= strcmp(s1,s2);

    if(a==0)
    {
        printf("Equal");
    }
    else
    printf("Not equal=%s",s1);
}
