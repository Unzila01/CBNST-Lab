// e^x = 1+ x/1! + x^2/2! + x^3/3! + ---------

#include<stdio.h>

int main()
{
    int power; 
    float result=1;
    float temp=1;
    printf("Enter the Power: ");
    scanf("%d", &power);

    for(int i=1;i<=4;i++){
        temp=(temp*power)/i;
        result+=temp;
    }
    printf("Result: %f", result);

    return 0;
}