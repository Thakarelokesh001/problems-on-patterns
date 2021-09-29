#include<stdio.h>

void Display(int,int);

int main()
{
    int iRow = 0,iCol=0;

    printf("Enter Row :\t");
    scanf("%d",&iRow);

    printf("Enter Column :\t");
    scanf("%d",&iCol);
    if(iRow != iCol)
    {
        printf("Enter Same Row and Column otherwise you will not get proper diagonal output\n");
    }
    else
    {
    Display(iRow,iCol);
    }
    
    return 0;
}

void Display(int iRow,int iCol)
{
    for(int i = 1;i<=iRow;i++)
    {
        for(int j=1;i>=j;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}








