#include<stdio.h>
int main()
{
    char s1[30]="Kanak";
    char s2[30]="Sarker";
    char s3[30];

    printf("After Swap:\n");
    printf("Swap s1 = %s\n",s1);
    printf("Swap s2 = %s\n",s2);

    strcpy(s3,s1);
    strcpy(s1,s2);
    strcpy(s2,s3);

    printf("\nBefore Swap:\n");
    printf("Swap s1 = %s\n",s1);
    printf("Swap s2 = %s\n",s2);
}
