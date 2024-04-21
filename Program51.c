#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iRet = 0;

    while(iNo != 0)
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

//Output:
// C:\Users\Priyanka\Desktop\LB\09-05-2023>gcc Program51.c -o Program51Exe

// C:\Users\Priyanka\Desktop\LB\09-05-2023>Program51Exe.exe
// Enter number :
// 7854
// 4587