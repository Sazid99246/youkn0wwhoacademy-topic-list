#include <stdio.h>
#include <stdlib.h>
// Complete the following function.

void calculate_the_maximum(int n, int k)
{
    int and = 0, or = 0, xor = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
            {
                continue;
            }

            if (((i & j) < k) && (i & j) > and)
            {
                and = i & j;
            }
            if (((i | j) < k) && (i | j) > or)
            {
                or = i | j;
            }
            if (((i ^ j) < k) && (i ^ j) > xor)
            {
                xor = i ^ j;
            }
        }
    }

    printf("%d\n%d\n%d\n", and, or, xor);
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
