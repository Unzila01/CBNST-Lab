/*
Name-Unzila
Section-I
Class Roll Number-11
University Roll Number-2017104
*/

// Problem Statement- Write a Program to implement Lagrange's Interpolation Formula

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

#define size 100

int main()
{
    printf("\nName-Unzila\n");
    printf("Section-I\n");
    printf("Class Roll Number-11\n");
    printf("University Roll Number-2017104\n");
    printf("\n");

    int n, i, j;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    float ax[size], ay[size];
    printf("\nEnter the x values: ");
    for(i=0;i<n;i++){
        scanf("%f", &ax[i]);
    }
    
    printf("\nEnter the y values: ");
    for(i=0;i<n;i++){
        scanf("%f", &ay[i]);
    }

    float x, y=0.0f;
    printf("\nEnter the value of x: ");
    scanf("%f", &x);

    float nr, dr;
    for(i=0;i<n;i++){
        nr=1.0f, dr=1.0f;
        for(j=0;j<n;j++){
            if(j!=i){
                nr=nr*(x-ax[j]);
                dr=dr*(ax[i]-ax[j]);
            }
        }
        y+=(nr/dr)*ay[i];
    }
    printf("\nValue of y at x = %.2f is %.2f\n\n", x, y);

    return 0;
}