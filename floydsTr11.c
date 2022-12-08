#include <stdio.h>
int main()
{
    int n, c = 1;
    int i, j;
    printf("enter the value of n:");

    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%d ", c++);
        printf("\n");
    }
}
