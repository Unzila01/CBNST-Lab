/*
Name-Unzila
Section-I
Class Roll Number-11
University Roll Number-2017104
*/

// Problem Statement- Write a Program to solve the system of linear equations by using Gauss Elimination Method

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    printf("Name-Unzila\n");
    printf("Section-I\n");
    printf("Class Roll Number-11\n");
    printf("Program-BTech[CSE]\n");
    printf("University Roll Number-2017104\n");
    printf("\n");

    int i, j, k, n;
    float m[20][20], x[20];
    double s, p;
    
    printf("Enter the number of equations: ");
    scanf("%d", &n);
    printf("\nEnter the co-efficients of the equations: \n\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("m[%d][%d] = ", i, j);
            scanf("%f", &m[i][j]);
        }
        printf("b[%d] = ", i + 1);
        scanf("%f", &m[i][n]);
    }
    printf("\n\n");

    printf("Equation 1: (%.0f)x+(%.0f)y+(%.0f)z=%.0f\n", m[0][0], m[0][1], m[0][2], m[0][3]);
    printf("Equation 2: (%.0f)x+(%.0f)y+(%.0f)z=%.0f\n", m[1][0], m[1][1], m[1][2], m[1][3]);
    printf("Equation 3: (%.0f)x+(%.0f)y+(%.0f)z=%.0f\n", m[2][0], m[2][1], m[2][2], m[2][3]);
    printf("\n");
    printf("Augmented Matrix: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%f ",m[i][j]);
        }
        printf("%f \n",m[i][n]);
    }
    for (k = 0; k <= n - 1; k++)
    {
        for (i = k + 1; i < n; i++)
        {
            p = m[i][k] / m[k][k];
            for (j = k; j <= n; j++)
            {
                m[i][j] = m[i][j] - (p * m[k][j]);
            }
        }
    }
    printf("\n");
    printf("Final Matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%f ",m[i][j]);
        }
        printf("%f \n",m[i][n]);
    }

    x[n - 1] = m[n - 1][n] / m[n - 1][n - 1];
    for (i = n - 2; i >= 0; i--)
    {
        s = 0;
        for (j = i + 1; j < n; j++)
        {
            s += (m[i][j] * x[j]);
            x[i] = (m[i][n] - s) / m[i][i];
        }
    }
    printf("\n");
    printf("\nResult:\n");
    for (i = 0; i < n ; i++)
    {
        printf("\nx[%d] = %.2f", i + 1, x[i]);
    }
    return 0;

}