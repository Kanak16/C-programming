#include<stdio.h>
int main()
{
    int a[10][10],tra[10][10],i,j,r,c;
    printf("Enter row&col:");
    scanf("%d %d",&r,&c);

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }


    //transpose
    for(i=0; i<r; i++);

    {
        for(j=0; j<c; j++)
        {
            tra[j][i] = a[i][j];
        }
        printf("\n");
    }
}

    printf("\nEnter Matrix\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {

            printf("%d",a[i][j]);
        }
        printf("\n");
    }

    //transp print.

    printf("\nTranspros Matrix:\n");
    for(i=0; i<c; i++)
    {
        for(j=0; j<r; j++)
        {

            printf("%d ",tra[i][j]);
        }
        printf("\n");
    }
    getch();

}
