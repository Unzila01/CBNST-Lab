/*
Name-Unzila
Section-I
Class Roll Number-11
University Roll Number-2017104
*/

// Problem Statement- Write a Program to implement Trapezoidal Rule

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

#define size 100

float func(float x){
    return 1/(1+x*x);
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

    printf("Equation: 1/(1+x*x)\n");
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
    
    sum=func(a)+func(b);

    for(int i=1;i<n;i++){
        sum+=2*func(a+i*h);
    }

    result=sum*(h/2);

    printf("\nValue of Integral is %f\n\n", result);

    return 0;
}