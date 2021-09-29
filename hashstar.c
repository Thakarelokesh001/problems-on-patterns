//Input: 6
//Output: *#*#*#

#include<stdio.h>

void Display(int iNo)
{
    for(int iCnt=1;iCnt<=iNo;iCnt++)
    {
//        (iCnt%2==0)?printf("#"):printf("*");
        
        if(iCnt % 2 == 0)
        {
            printf("#\t");
        }
        else
        {
            printf("*\t");
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number :\t");
    scanf("%d",&iValue);
    
    Display(iValue);
    return 0;
}

