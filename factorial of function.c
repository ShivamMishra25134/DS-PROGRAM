#include <stdio.h>

int factorial(int n);  

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);  

    int result = factorial(n);
    printf("Factorial of %d is %d\n", n, result);
    
    return 0;
}

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

