/*
Name-Unzila
Section-I
Class Roll Number-11
University Roll Number-2017104
*/

// Problem Statement- Write a Program to implement Newton's Backward Method of Interpolation

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100

int main()
{
    printf("\nName-Unzila\n");
    printf("Section-I\n");
    printf("Class Roll Number-11\n");
    printf("University Roll Number-2017104\n");
    printf("\n");

    int n;
    float data[MAX][MAX];

    printf("Enter the Number of data points: ");
    scanf("%d", &n);

    printf("Enter data points: \n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%f%f", &data[i][0], &data[i][1]);
    }

    float x;
    printf("Enter the value of x: ");
    scanf("%f", &x);

    float h = (data[1][0]-data[0][0]);
    float u = (x-data[n-1][0])/h;

    for(int i = 2; i <= n; i++)
    {
        for(int j = n-1; j > i-2 ; j--)
        {
            data[j][i] = data[j][i-1]-data[j-1][i-1];
        }
    }
    
    float ans = data[n-1][1];
    float fact = 1.0f;
    float ch = u;

    for(int i = 2; i <= n; i++)
    {
        ans += (ch/fact)*data[n-1][i];
        ch *= (u+(float)(i-1));
        fact *= i;
    }

    printf("\nDifference Table: ");
    printf("\nx      \t y    \t  y1   \t  y2   \t  y3   \t  y4  \n"); 
    for(int j = 0; j < n; j++)
    {
        for(int i = 0; i <= n; i++)
        {
            if(data[j][i]==0.0) continue;
            printf("%.1f     ", data[j][i]);
        }
        printf("\n");
    }

    printf("\nValue of y at x = %.1f is %.2f\n\n", x, ans);

    return 0;
}

// 5
// 45 114.84
// 50 96.16
// 55 83.32
// 60 74.48
// 65 68.48
// 63