#include<stdio.h>
int main()
{
    int first[10][10],second[10][10],result[10][10],r1,r2,c1,c2,i,j,k,sum=0;


    printf("Enter row and col first matrix:");
    scanf("%d %d",&r1,&c1);
    printf("Enter row and col first matrix:");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("\n Error !! column of first matrix to ro of seccond matrix:\n");

        printf("\n Enter row and col first matrix:");
        scanf("%d %d",&r1,&c1);
        printf("Enter row and col first matrix:");
        scanf("%d %d",&r2,&c2);
    }

    printf("\nEnter a First matrix\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("first[%d][%d]=",i,j);
            scanf("%d",&first[i][j]);
        }
    }

    printf("\nEnter a second matrix\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("second[%d][%d]=",i,j);
            scanf("%d",&second[i][j]);
        }
    }

    printf("Enter a frist matrix\n");

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d ",first[i][j]);
        }
        printf("\n");
    }

    printf("Enter a Second matrix\n");
    for(i=0; i<r2; i++)
    {

        for(j=0; j<c2; j++)
        {

            printf("%d ",second[i][j]);

        }
        printf("\n");
    }

    //mul
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)

            {
                sum=sum + first[i][k] * second[k][j];
            }
            result[i][j]=sum;
            sum=0;

        }

    }

     printf("Enter a Result matrix\n");
    for(i=0; i<r1; i++)
    {

        for(j=0; j<c2; j++)
        {

            printf("%d ",result[i][j]);

        }
        printf("\n");
    }
}
