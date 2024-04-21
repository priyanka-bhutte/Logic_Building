#include<stdio.h>

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }
    return iSum;

}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);
    printf("Sum of digits are : %d\n", iRet);
    return 0;
}

// Output:
// C:\Users\Priyanka\Desktop\LB\May\03-05-2023>gcc Program50.c -o Program50Exe

// C:\Users\Priyanka\Desktop\LB\May\03-05-2023>Program50Exe.exe
// Enter number :
// 5
// Sum of digits are : 5

// C:\Users\Priyanka\Desktop\LB\May\03-05-2023>Program50Exe.exe
// Enter number :
// 1234
// Sum of digits are : 10

// C:\Users\Priyanka\Desktop\LB\May\03-05-2023>Program50Exe.exe
// Enter number :
// 551
// Sum of digits are : 11