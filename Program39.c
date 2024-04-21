#include<stdio.h>
#include<stdbool.h>

int Factorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        iFact =  iFact * iCnt; 
        
    }
    return iFact;
  
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Result is : %d\n",iRet);
    

    return 0;

}

// Output:
// C:\Users\Priyanka\Desktop\LB\May\03-05-2023>Program39Exe.exe
// Enter number :
// 5
// Result is : 120