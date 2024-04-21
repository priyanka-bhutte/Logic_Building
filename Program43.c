#include<stdio.h>
#include<stdbool.h>

void Display(int iNo)
{
    int iCnt = 0;

    iCnt = 1;
    while(iCnt <= iNo)
    {
        printf("%d\t",iCnt);
        iCnt++;
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
// C:\Users\Priyanka\Desktop\LB\May\03-05-2023>Program43Exe.exe
// Enter number :
// 5
// 1       2       3       4       5