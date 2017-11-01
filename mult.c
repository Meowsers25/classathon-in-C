#include <cs50.h>
#include <stdio.h>

int multNow(int a, int b);

int main(void)
{
   multNow(5, 5);
}

int multNow(int a, int b)
{
    int product = a * b;
    printf("%i\n", product);
    return product;
}