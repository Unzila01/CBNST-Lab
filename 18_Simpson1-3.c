/*
Name-Unzila
Section-I
Class Roll Number-11
University Roll Number-2017104
*/

// Problem Statement- Write a Program to implement Simpson's 1/3 Rule

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

#define size 100

float func(float x)
{
    return 1/(1+x);
}

int main()
{
    printf("\nName-Unzila\n");
    printf("Section-I\n");
    printf("Class Roll Number-11\n");
    printf("University Roll Number-2017104\n");
    printf("\n");

    int n;
    float a, b, h, sum=0.0, result=0.0;

    printf("Equation: 1/(1+x)\n");
    printf("Enter the number of Subintervals: ");
    scanf("%d", &n);
    
    printf("Enter the interval: ");
    scanf("%f%f", &a, &b);

    h=(b-a)/n;

    printf("\nx : ");
    for(int i = 0; i <= n; i++)
    {
        printf("%.2f  ", (a+(i*h)));
    }
    printf("\ny : ");
    for(int i = 0; i <= n; i++)
    {
        printf("%.2f  ", func(a+(i*h)));
    }
    printf("\n");
    
    sum=func(a)+4*func(a+h)+func(b);

    for(int i=3;i<n;i+=2){
        sum+=2*func(a+(i-1)*h)+4*func(a+i*h);
    }

    result=sum*(h/3);

    printf("\nValue of Integral is %f\n\n", result);

    return 0;
}

// n=12
// Interval - 0 and 1