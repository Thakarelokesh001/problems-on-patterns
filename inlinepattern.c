//Input : 5
//Output: * * * * *

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
    for(int iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\t");
    }
}
