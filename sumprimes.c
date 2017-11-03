#include <cs50.h>
#include <stdio.h>

bool isPrime(int n);

int sumPrimes(int num);

int main(void)
{
    printf("%d\n", isPrime(50));
    printf("%d\n", isPrime(977));
}

bool isPrime(int n)
{
    for (int i = 2, max = (n / 2); i <= max; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int sumPrimes(int num)
{
    int sum = 0;
    for (int i = num; i >= 2; i--)
    {
        if(isPrime(i))
        {
            sum += i;
        }
    }
    return sum;
}