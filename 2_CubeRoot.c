#include<stdio.h>
#include<math.h>

int main()
{
    int n, res;
    printf("Enter the Number: ");
    scanf("%d", &n);
    res=cbrt(n);
    printf("Cube Root of %d is %d", n, res);

    return 0;
}