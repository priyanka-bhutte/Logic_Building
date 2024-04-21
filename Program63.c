#include<stdio.h>

int ReverseNumber(int iNo)
{
    int iDigit = 0;
    int iReverse = 0;
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
    return iReverse;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n ");
    scanf("%d",&iValue);

    iRet= ReverseNumber(iValue);

    printf("Reverse number is %d\n",iRet);   

    return 0;
}

// Output:
// C:\Users\Priyanka\Desktop\LB\09-05-2023>gcc Program63.c -o Program63Exe

// C:\Users\Priyanka\Desktop\LB\09-05-2023>Program63Exe.exe
// Enter number
//  26547
// Reverse number is 74562

// C:\Users\Priyanka\Desktop\LB\09-05-2023>Program63Exe.exe
// Enter number
//  721
// Reverse number is 127

// C:\Users\Priyanka\Desktop\LB\09-05-2023>Program63Exe.exe
// Enter number
//  6753
// Reverse number is 3576


