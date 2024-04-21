#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iRet = 0;

    for( ;iNo != 0; iNo = iNo / 10)
    {
        iRet = iNo % 10;
        printf("%d\n",iRet);
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}

// Output:
// C:\Users\Priyanka\Desktop\LB\09-05-2023>gcc Program53.c -o Program53Exe

// C:\Users\Priyanka\Desktop\LB\09-05-2023>Program53Exe.exe
// Enter number :
// 7854
// 4
// 5
// 8
// 7