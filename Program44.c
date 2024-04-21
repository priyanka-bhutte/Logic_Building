#include<stdio.h>
#include<stdbool.h>

void Display(int iNo)
{
    int iCnt = 0;

    iCnt = iNo;
    while(iCnt >= 1)
    {
        printf("%d\t",iCnt);
        iCnt--;
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
// C:\Users\Priyanka\Desktop\LB\May\03-05-2023>Program44Exe.exe
// Enter number :
// 5
// 5       4       3       2       1