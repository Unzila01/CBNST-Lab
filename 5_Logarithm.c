#include<stdio.h>
#include<math.h>

int main()
{
    double num, result;
    printf("Enter the Number: ");
    scanf("%lf", &num);

    result=log(num);
    printf("Natural log of %.2lf is %lf", num, result);

    return 0;
}