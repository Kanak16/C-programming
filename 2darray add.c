#include<stdio.h>
int main()
{
     int i,j,Row,Col;
    int a[10][10],b[10][10],add[10][10];



    printf("Enter nom row and col:");
    scanf("%d %d",&Row,&Col);

//scanf a
    printf("Enter A matrix.\n");
    for(i=0; i<Row; i++)
    {
        for(j=0; j<Col; j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    //scanf b
    printf("Enter B matrix.\n");
    for(i=0; i<Row; i++)
    {
        for(j=0; j<Col; j++)
        {
            printf("b[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

 //print a
    printf("A=\n");
    for(i=0; i<Row; i++)
    {
        printf("\t");
        for(j=0; j<Col; j++)
        {
            printf("%d  ",a[i][j]);
        }

        printf("\t");
        printf("\n");
    }

printf("Enter Element Matrix B:\n");

//print b
    printf("B =\n");
    for(i=0; i<Row; i++)

    {
         printf("\t");
        for(j=0; j<Col; j++)
        {
            printf("%d  ",b[i][j]);
        }
        printf("\t");
        printf("\n");
    }

    for(i=0; i<Row; i++)

    {
         printf("\t");
        for(j=0; j<Col; j++)
        {
            add[i][j]=a[i][j]+b[i][j];
        }
        printf("\n");
    }

printf("Add\n");
    for(i=0; i<Row; i++)

    {
         printf("\t");
        for(j=0; j<Col; j++)
        {
            printf("%d  ",add[i][j]);
        }
        printf("\t");
        printf("\n");
    }
return 0;

}
