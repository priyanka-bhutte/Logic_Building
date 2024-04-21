#include<stdio.h>

int CountOddDigits(int iNo)
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
        if((iDigit %2) != 0)
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

    iRet= CountOddDigits(iValue);
    
    printf("Frequency of even digits is %d ",iRet);   
}

// Output:
// C:\Users\Priyanka\Desktop\LB\09-05-2023>gcc Program62.c -o Program62Exe

// C:\Users\Priyanka\Desktop\LB\09-05-2023>Program62Exe.exe
// Enter number
//  23857
// Frequency of even digits is 3
// C:\Users\Priyanka\Desktop\LB\09-05-2023>Program62Exe.exe
// Enter number
//  3755
// Frequency of even digits is 4

