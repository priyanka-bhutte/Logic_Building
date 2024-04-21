#include<stdio.h>

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCnt =0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iCnt++;
        iNo = iNo / 10;
    }
    return iCnt;

}
int main()
{
    int i;
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);
    printf("Number of digits are : %d\n", iRet);
    return 0;
}

// Output:
// C:\Users\Priyanka\Desktop\LB\May\03-05-2023>Program48Exe.exe
// Enter number :
// 5
// Number of digits are : 1

// C:\Users\Priyanka\Desktop\LB\May\03-05-2023>Program48Exe.exe
// Enter number :
// 10
// Number of digits are : 2

// C:\Users\Priyanka\Desktop\LB\May\03-05-2023>Program48Exe.exe
// Enter number :
// 4
// Number of digits are : 1

// C:\Users\Priyanka\Desktop\LB\May\03-05-2023>Program48Exe.exe
// Enter number :
// 120
// Number of digits are : 3