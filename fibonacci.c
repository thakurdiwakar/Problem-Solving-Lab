#include <stdio.h>
int main()
{

    int n1 = 0, n2 = 1, new, n;

    printf("Enter the number to print series :");
    scanf("%d", &n);

    printf("%d%d", n1, n2);

    for (int i = 2; i < n; i++)
    {
        new= n1 + n2;

        printf(" %d ", new);
        n1 = n2;
        n2 = new;
    }
}