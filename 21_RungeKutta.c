/*
Name-Unzila
Section-I
Class Roll Number-11
University Roll Number-2017104
*/

// Problem Statement- Write a Program to implement Euler's Method

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

#define f(x,y) (x*x-y)

int main()
{
    printf("\nName-Unzila\n");
    printf("Section-I\n");
    printf("Class Roll Number-11\n");
    printf("University Roll Number-2017104\n");
    printf("\n");

    float x0, y0, h, xn, x, y, k;

    printf("Equation: (x-y)/(x+y)\n");
    printf("Enter the values of x0, y0: ");
    scanf("%f %f", &x0, &y0);

    printf("Enter the values of h: ");
    scanf("%f", &h);

    printf("Enter the values of xn: ");
    scanf("%f", &xn);
    printf("\n");

    int n=(xn-x0)/h;
    x=x0, y=y0;

    float k1, k2, k3, k4;
    for(int i = 0; i <= n; i++)
    {
        k1=h*f(x, y);
        k2=h*f(x+(h/2.0), y+(k1/2.0));
        k3=h*f(x+(h/2.0), y+(k2/2.0));
        k4=h*f(x+h, y+k3);

        k = (k1+2*(k2+k3)+k4)/6.0;

        printf("The value of y at x = %.3f is %.5f\n", x, y);
        x=x+h;
        y=y+k;
    }
    printf("\n");
    // return 0;
}

// 0 1
// 0.02
// 0.1