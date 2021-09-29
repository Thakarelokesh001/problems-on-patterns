//Input : 4
//Output: 1* 2* 3* 4*

#include<stdio.h>

void Display(int);

int main()
{
    int iValue=0;
    
    printf("Enter Number to Diplay count of stars:\t");
    scanf("%d",&iValue);
    
    Display(iValue);
    
    return 0;
}

void Display(int iNo)
{
    for(int iCnt=iNo;iCnt>=1;iCnt--)
    {
        printf("%d *\t",iCnt);
    }
}


