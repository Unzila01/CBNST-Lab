/*
Name-Unzila
Section-I
Class Roll Number-11
University Roll Number-2017104
*/

// Problem Statement- Write a Program to find the roots of an equation using Bisection Method

#include<stdio.h>
#include<math.h>
#define f(x) x*x*x -4*x +1

int main()
{
    printf("Name-Unzila\n");
    printf("Section-I\n");
    printf("Class Roll Number-11\n");
    printf("University Roll Number-2017104\n");
    printf("\n");

    float x0, x1, x2;
    float f0, f1, f2;
    int i=0;
    printf("Equation is x*x*x -4*x +1\n");
    printf("Enter the values of x0 & x1: ");
    scanf("%f %f", &x0, &x1);
    do{
        x2=(x0+x1)/2.0;
        f0=f(x0);
        f1=f(x1);
        f2=f(x2);

        if(x2==0.0) 
            break;
        else if(f0*f2<0.0)
            x1=x2;
        else
            x0=x2;

        i++;

        printf("Iteration: %d,", i);
        printf("  Root = %f\n", x2);
        
    }while(fabs(f2)>0.0001);
    
    return 0;
}

// x0=1, x1=2