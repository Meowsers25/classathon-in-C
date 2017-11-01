#include <cs50.h>
#include <stdio.h>

long long factorialize(long long num);

int main(void)
{
    factorialize(5);
    factorialize(10);
    factorialize(20);
}

long long factorialize(long long num)
{
    long long n = num;

    if(n == 0)
    {
        printf("1\n");
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            num = num * i;
        }
        printf("%lli\n", num);
    }
        return 0;
}
