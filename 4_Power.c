// Program to calculate the power of a Number

#include<stdio.h>

int main()
{
    int base, power; 
    int result=1;
    printf("Enter the Base: ");
    scanf("%d", &base);
    printf("Enter the Power: ");
    scanf("%d", &power);

    for(int i=0;i<power;i++){
        result*=base;
    }
    printf("Result: %d", result);

    return 0;
}