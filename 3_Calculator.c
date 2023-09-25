#include<stdio.h>

int main()
{
    int num1, num2, choice, res;
    printf("Press 1 to add the numbers.\nPress 2 to subtract the numbers.\nPress 3 to multiply the numbers.\nPress 4 to divide the numbers.\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter the two Numbers: ");
    scanf("%d %d", &num1, &num2);
    switch(choice){
    case 1:
        res=num1+num2;
        printf("Result: %d",res);
        break;
    case 2:
        res=num1-num2;
        printf("Result: %d",res);
        break;
    case 3:
        res=num1*num2;
        printf("Result: %d",res);
        break;
    case 4:
        res=num1/num2;
        printf("Result: %d",res);
        break;
    default:
        printf("Invalid Choice.");
    }

    return 0;
}