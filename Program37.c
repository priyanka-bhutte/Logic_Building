#include<stdio.h>
#include<stdbool.h>

void Display(int iNo)
{
    int iCnt = 0;

    
    for(iCnt = 1; iCnt <=iNo; iCnt++)
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
// C:\Users\Priyanka\Desktop\LB\May\03-05-2023>Program37Exe.exe
// Enter number :
// 10
// 1       2       3       4       5       6       7       8       9       10