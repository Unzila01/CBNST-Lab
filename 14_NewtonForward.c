/*
Name-Unzila
Section-I
Class Roll Number-11
University Roll Number-2017104
*/

// Problem Statement- Write a Program to implement Newton's Forward Method of Interpolation

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

    float data[MAX][MAX];
    int n;

    printf("Enter the number of data points: ");
    scanf("%d", &n);
    printf("Enter data points: \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%f %f", &data[i][0], &data[i][1]);
    }

    float h = (data[1][0]-data[0][0]);
    float x;
    printf("Enter the value of x: ");
    scanf("%f", &x);

    float u = (x-data[0][0])/h;

    for(int j = 2; j <= n; j++)
    {
        for(int i = 0; i < n-j+1; i++)
        {
            data[i][j] = data[i+1][j-1]-data[i][j-1];
        }
    }

    float ans = 0.0f;

    ans += data[0][1];
    float ch = u;
    float fact = 1.0;

    for(int i = 2; i <= n; i++)
    {
        ans += ((ch/fact)*data[0][i]);
        ch *= (u-(float)(i-1));
        fact *= i;
    }

    printf("\nDifference Table: ");
    printf("\nx  \ty  \ty1   \ty2   \ty3 \n"); 
    for(int j = 0; j < n; j++)
    {
        for(int i = 0; i <= n-j; i++)
        {
            printf("%.0f     ", data[j][i]);
        }
        printf("\n");
    }

    printf("\nValue of y at x = %.2f is %.2f\n\n", x, ans);

    return 0;
}

// 1891 1901 1911 1921 1931
// 46 66 81 93 101

// 4
// 40 6.2
// 50 7.2
// 60 9.1
// 70 12
// 63

// 4
// 20 512
// 30 439
// 40 346
// 50 243
// 32