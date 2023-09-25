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

// #define f(x,y) (x+y+x*y)
#define f(x,y) (x*x+y*y)

int main()
{
    printf("\nName-Unzila\n");
    printf("Section-I\n");
    printf("Class Roll Number-11\n");
    printf("University Roll Number-2017104\n");
    printf("\n");

    int n, i;
    float x0, y0, h, xn, x, y;

    printf("Equation: x+y+x*y\n");
    printf("Enter the values of x0, y0: ");
    scanf("%f %f", &x0, &y0);

    printf("Enter the values of h: ");
    scanf("%f", &h);

    printf("Enter the values of xn: ");
    scanf("%f", &xn);
    printf("\n");

    x=x0, y=y0;
    for(float i = x; i < xn; i+=h)
    {
        y = y +(h*f(i, y));
        printf("The value of y at x = %.3f is %.5f\n", (i+h), y);
    }
    printf("\n");

    return 0;
}