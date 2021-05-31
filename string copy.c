/*
#include<stdio.h>
int main()
{
    char s1[]="kanak sarker";
    char cope[20];
    strcpy(cope,s1);
    printf("Copy String=%s\n",cope);
    printf("Copy String=%s",s1);
}
*/
#include<stdio.h>
int main()
{
    char s1[]=" kanak sarker";
    char s2[]=" abir"; // ata nah dileo hobe porer comment use kore
    strcat(s1,s2); //strcat(s1,"abir")

     printf("S1=%s\n",s1);
     printf("S2=%s\n",s2);

}
