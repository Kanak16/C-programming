#include<stdio.h>
int main()
{
    int a[3][3],c,r,uppersum=0,lowersum=0,i,j;

    printf("Enter row & col:");
    scanf("%d %d",&r,&c);

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nEnter Matrix\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {

            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
           if(i<j)
           {

              uppersum = uppersum+a[i][j];
           }
           if(i>j)
           {

              lowersum = lowersum+a[i][j];
           }
        }
    }

    printf("\n sum of  uppersum Element:%d\n",uppersum);
    printf("\n sum of   lowersum Element:%d\n",lowersum);



    getch();

}

