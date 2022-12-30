#include <stdio.h>
#include <math.h>
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


int main(int ac, char **av)
{
	long int num = 600851475143, i, factor;
	for (i = 5; i <= sqrt(num); i++)
	{
	    if (IsPrime(i) == TRUE)
	    {
	        if (num % i == 0)
	            factor = i;
	    }
	}
	printf("%li\n", factor);
	return (0);
}