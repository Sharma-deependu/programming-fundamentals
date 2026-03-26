#include <stdio.h>

int factorial(int x)
{
    int fac;
    if (x == 0 || x == 1)
        return 1;
    else
    {
        fac = x * factorial(x - 1);
        return fac;
    }
}

int main()
{
    int num;
    printf("Enter the numbers :\n");
    scanf("%d", &num);
    printf("Factorial of %d = %d", num, factorial(num));
    return 0;
}