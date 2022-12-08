#include <stdio.h>
int main()
{

    int n, r, s = 0;

    printf("Enter the number :\n ");

    scanf("%d", &n);

    while (n > 0)
    {
        r = n % 10;
        s = s + r;
        n = n / 10;
    }

    printf("The sum of digit of a number is : %d", s);
}