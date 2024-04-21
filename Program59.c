#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(int iNo, int iSearch)
{
    int iDigit = 0;

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
            break;
        }
        iNo = iNo / 10;
    }

    if(iDigit == iSearch)
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
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Enter number\n ");
    scanf("%d",&iValue1);

    printf("Enter the digit(0 to 9)\n ");
    scanf("%d",&iValue2);


    bRet= CheckDigit(iValue1, iValue2);

    if(bRet == true)
    {
        printf("%d is present in %d \n",iValue2,iValue1);
    }
    else
    {
        printf("%d is not present in %d \n",iValue2,iValue1);
    }
    
}

// Output:
// C:\Users\Priyanka\Desktop\LB\09-05-2023>gcc Program59.c -o Program59Exe

// C:\Users\Priyanka\Desktop\LB\09-05-2023>Program59Exe.exe
// Enter number
//  3875
// Enter the digit(0 to 9)
//  8
// 8 is present in 3875