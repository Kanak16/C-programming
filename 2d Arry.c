#include<stdio.h>
int main()
{
    int i,j ,a[4][4] =
    {
        {4,6,7,8},
        {5,3,5,5},
        {2,3,8,1},
        {3,4,7,7}
    };

    for(i=0;i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}
