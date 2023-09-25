/*
Name-Unzila
Section-I
Class Roll Number-11
University Roll Number-2017104
*/

// Problem Statement- Write a Program to find the roots of an equation using Quadratic Formula


#include<stdio.h>
#include<math.h>

int main()
{
    printf("Name-Unzila\n");
    printf("Section-I\n");
    printf("Class Roll Number-11\n");
    printf("University Roll Number-2017104\n");
    printf("\n");

    float a, b, c, d, x1, x2;
    printf("Enter the value of a, b, c: \n");
    scanf("%f", &a);
    if(a==0){
        printf("Value of a must be greater than zero.\n");
        scanf("%f %f %f", &a, &b, &c);
    }
    else{
        scanf("%f %f", &b, &c);
    }

    d=b*b-4*a*c;
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);

    if(d>0){
    printf("Equation has two real, distinct roots.\n");
    printf("Roots are %f and %f", x1, x2);

    }
    else if(d==0){
    printf("Equation has two real, identical roots.\n");
    printf("Roots are %f and %f", x1, x2);
    } 
    else{
    printf("Equation has no real roots.\n");
    }


    return 0;
}