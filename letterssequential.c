//Input : 6
//Output : a    b   c   d   e

#include<stdio.h>

void Display(int);

int main()
{
    int iValue = 0;
    
    printf("Enter Number :\t");
    scanf("%d",&iValue);
    
    Display(iValue);
    
    return 0;
}

void Display(int iNo)
{
    int iCnt = 0;
    char ch='\0';
    
    for(iCnt = 1,ch='a';iCnt<=iNo;iCnt++,ch++)
    {
        printf("%c\t",ch);
//        ch++;
    }
    printf("\n");
}
