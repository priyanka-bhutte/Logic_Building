#include<stdio.h>
#include<stdbool.h>

int CountDigitFrequency(int iNo, int iSearch)
{
    int iDigit = 0;
    int iCount = 0;

    if((iSearch < 0) || (iSearch > 9))
    {
        printf("Enter the digit in range 0 to 9\n");
        return false;
    }
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == iSearch)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }

    return iCount;
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter number\n ");
    scanf("%d",&iValue1);

    printf("Enter the digit(0 to 9)\n ");
    scanf("%d",&iValue2);


    iRet= CountDigitFrequency(iValue1, iValue2);

    
    printf("%d is present in %d %d times\n",iValue2,iValue1,iRet);
    
    
}

// Output:
// C:\Users\Priyanka\Desktop\LB\09-05-2023>gcc Program60.c -o Program60Exe

// C:\Users\Priyanka\Desktop\LB\09-05-2023>Program60Exe.exe
// Enter number
//  84382
// Enter the digit(0 to 9)
//  8
// 8 is present in 84382 2 times