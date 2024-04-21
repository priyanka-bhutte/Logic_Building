#include<stdio.h>
#include<stdbool.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);       
    }
}


int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

   Display(iValue);

    return 0;

}

// Output:
// C:\Users\Priyanka\Desktop\LB\May\03-05-2023>Program38Exe.exe
// Enter number :
// 10
// 10      9       8       7       6       5       4       3       2       1