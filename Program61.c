#include<stdio.h>

int CountEvenDigits(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit %2) == 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount++;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n ");
    scanf("%d",&iValue);

    iRet= CountEvenDigits(iValue);

    
    printf("Frequency of even digits is %d ",iRet);
   
}

// Output:
// C:\Users\Priyanka\Desktop\LB\09-05-2023>gcc Program61.c -o Program61Exe

// C:\Users\Priyanka\Desktop\LB\09-05-2023>Program61Exe.exe
// Enter number
//  12
// Frequency of even digits is 1
// C:\Users\Priyanka\Desktop\LB\09-05-2023>Program61Exe.exe
// Enter number
//  23456
// Frequency of even digits is 3