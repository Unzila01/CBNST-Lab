//Program to implement the Newton Raphson Method
// x0=2
// Answer=2.236068

/*
Name-Unzila
Section-I
Class Roll Number-11
University Roll Number-2017104
*/

// Problem Statement- Write a Program to find the roots of an equation using Newton Raphson Method

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

// #define f(x) x*x-5
// #define d(x) 2*x
#define f(x) x*x*x-2*x-5
#define d(x) 3*x*x-2
// #define f(x) x*x*x-24
// #define d(x) 3*x*x

// #define f(x) x*x*x-5
// #define d(x) 3*x*x

int getPoint()
{
    int neg=-60, pos=-60;
    for(int i=-50;i<50;i++){
        if(f(i)<0) 
            neg=i;
        else
            pos=i;

        if(neg!=-60 && pos!=-60) 
        break;
    }
    printf("Range = (%d %d)\n", neg, pos);
    return (abs(f(neg))<abs(f(pos)))?neg:pos;

}

int main()
{
    printf("Name-Unzila\n");
    printf("Section-I\n");
    printf("Class Roll Number-11\n");
    printf("University Roll Number-2017104\n");
    printf("\n");
    float x0, x1;
    float f0, d0;
    int i;
    // printf("Enter the values of x0: ");
    // scanf("%f", &x0);
    printf("Equation is x*x*x-2*x-5\n");
    x0=getPoint();
    printf("Function value is near to zero at %f\n",x0);
    printf("\n");
    printf("Enter the number of iterations: ");
    scanf("%d", &i);
    int n=i;
    while(i--){
        f0=f(x0);
        d0=d(x0);
        
        x1=x0-(f0/d0);
        x0=x1;

    printf("Number of Iterations: %d, ", (n-i));
    printf("Root = %f\n", x1);
    } 

    return 0;  
}