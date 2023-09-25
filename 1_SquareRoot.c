#include<stdio.h>
#include<math.h>

int main(){
    int num, ans;
    // printf("***This is a Program to calculate the Square root of a number***\n");
    printf("Enter the Number: ");
    scanf("%d", &num);
    ans=sqrt(num);
    printf("Square Root of %d is %d", num, ans);

    return 0;
}