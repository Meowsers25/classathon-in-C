#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long long num = 1;
    long long n = get_int();

    if (n == 0)
    {
        printf("1\n");
    }
    else
    {
    for (int i = 1; i <= n; i++)
    {
        num = num * i;
    }
    printf("%lli", num);
    }
}