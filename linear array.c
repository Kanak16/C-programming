#include<stdio.h>
int main ()
{
    int a[]={10,2,4,15,35,46,85};

    int value,pos=-1,i;

    printf("Enter the value:");
    scanf("%d",&value);

    for(i=0; i<7; i++)
    {
        if(value==a[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    {
        printf("Item is not found");
    }
    else
    printf("The value is found %d position:",pos);

    getch();
}
