#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iDigit = 0;
    int iReverse = 0;
    int iTemp = iNo;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iReverse = (iReverse * 10)+iDigit;
        iNo = iNo / 10;
    }
    printf("Reverse number is %d \n",iReverse);
    if(iTemp == iReverse)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number\n ");
    scanf("%d",&iValue);

    bRet= CheckPallindrome(iValue);

    if(bRet == true)
    {
        printf("%d is a Pallindrome number\n",iValue);
    }
    else
    {
        printf("%d is a not Pallindrome number\n",iValue);
    }
    return 0;
}

// Output:
// C:\Users\Priyanka\Desktop\LB\09-05-2023>gcc Program65.c -o Program65Exe

// C:\Users\Priyanka\Desktop\LB\09-05-2023>Program65Exe.exe
// Enter number
//  121
// Reverse number is 121
// 121 is a Pallindrome number

// C:\Users\Priyanka\Desktop\LB\09-05-2023>Program65Exe.exe
// Enter number
//  1234
// Reverse number is 4321
// 1234 is a not Pallindrome number





