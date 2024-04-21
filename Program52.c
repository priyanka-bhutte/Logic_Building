#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iRet = 0;
    //using for loop, no need to write initialization n displacement
    for( ;iNo != 0;)
    {
        iRet = iNo % 10;
        iNo = iNo / 10;
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
// C:\Users\Priyanka\Desktop\LB\09-05-2023>gcc Program52.c -o Program52Exe

// C:\Users\Priyanka\Desktop\LB\09-05-2023>Program52Exe.exe
// Enter number :
// 7854
// 4
// 5
// 8
// 7