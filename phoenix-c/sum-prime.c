#include<stdio.h>

#define TRUE 1
#define FALSE 0

int IsPrime(int n)
{
    if (n == 2 || n == 3)
        return (TRUE);

    if (n <= 1 || n % 2 == 0 || n % 3 == 0)
        return (FALSE);

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return (FALSE);
    }
    return (TRUE);
}


int main(int argc, char *argv[])
{
    long int sum = 0;
	for (int i = 1; i < 2000000; i++)
	{
	    if (IsPrime(i) == TRUE)
	        sum += i;
	}
	printf("[*] sum -- %li\n", sum);
	return (0);
}