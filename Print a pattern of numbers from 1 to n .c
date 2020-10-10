//Question link :- https://www.hackerrank.com/challenges/printing-pattern-2/problem

// Print a pattern of numbers from 1 to n as shown below. Each of the numbers is separated by a single space.

// n=5

// 5 5 5 5 5 5 5 5 5
// 5 4 4 4 4 4 4 4 5
// 5 4 3 3 3 3 3 4 5
// 5 4 3 2 2 2 3 4 5
// 5 4 3 2 1 2 3 4 5
// 5 4 3 2 2 2 3 4 5
// 5 4 3 3 3 3 3 4 5
// 5 4 4 4 4 4 4 4 5
// 5 5 5 5 5 5 5 5 5

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        int c = 0;
        for (int j = n; j >= i; j--)
        {
            printf("%d ", j);
            c++;
        }
        if (c != n)
        {
            for (int j = 1; j <= (n - c) * 2; j++)
            {
                printf("%d ", i);
            }
        }

        for (int j = 1; j <= (n - i); j++)
        {
            printf("%d ", i + j);
        }
        printf("\n");
    }
    int k = 1;
    for (int i = n; i > 1; i--)
    {
        int c = 0;
        for (int j = n; j > (n - i) + 1; j--)
        {
            printf("%d ", j);
            c++;
        }
        if (c != n)
        {
            for (int j = (n - c) * 2; j > 1; j--)
            {
                printf("%d ", n - i + 2);
            }
        }

        k++;
        for (int j = k; j <= n; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
