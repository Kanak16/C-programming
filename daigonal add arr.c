#include<stdio.h>
int main()
{
    int a[3][3],c,r,sum=0,i,j;

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

    printf("Digonal ELement:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
           if(i==j)
           {
               printf("%d ",a[i][j]);
              sum = sum+a[i][j];
           }
        }
    }

    printf("Digonals Element:%d\n",sum);



    getch();

}
