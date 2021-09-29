#include<stdio.h>

void Display(int,int);

int main()
{
    int iRow = 0,iCol=0;

    printf("Enter Row :\t");
    scanf("%d",&iRow);

    printf("Enter Column :\t");
    scanf("%d",&iCol);
  
    Display(iRow,iCol);
  
    return 0;
}

void Display(int iRow,int iCol)
{
    for(int i = 1;i<=iRow;i++)
    {
        for(int j=1;j<=iCol;j++)
        {
            if(i%2==0)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
        }
        printf("\n");
    }
}






