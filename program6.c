// Write a program which checks whether number is even or odd.

#include<stdio.h>       // For printf and scanf
#include<stdbool.h>     // For bool data type

bool CheckEvenOdd(int iNo) 
{
    if((iNo % 2) == 0)
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

    printf("Please enter number to check whether it is even or odd : \n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);    // Function call

    if(bRet == true)
    {
        printf("%d is Even number\n",iValue);
    }
    else
    {
        printf("%d is Odd number\n",iValue);
    }
    return 0;
}

