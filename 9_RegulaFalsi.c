/*
Name-Unzila
Section-I
Class Roll Number-11
University Roll Number-2017104
*/

// Problem Statement- Write a Program to find the roots of an equation using Regula Falsi Method

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) x*x*x -2*x -5

int main()
{
    printf("Name-Unzila\n");
    printf("Section-I\n");
    printf("Class Roll Number-11\n");
    printf("University Roll Number-2017104\n");
    printf("\n");

    float a, b, c;
    float fa, fb, fc;
    int i;
    printf("Equation is x*x*x -2*x -5\n");
    printf("Enter the values of a & b: ");
    scanf("%f %f", &a, &b);
    printf("Enter the number of Iterations: ");
    scanf("%d", &i);
    int n=i;
    while(i--){
        fa=f(a);
        fb=f(b);
        c=(a*fb-b*fa)/(fb-fa);
        fc=f(c);
        
        if(fa*fc<0){
            b=c;
        }
        else{
            a=c;
        }

        printf("Iterations: %d, ", (n-i));
        printf("Root = %f\n", c);

    }
    return 0;
}

// a=2, b=3