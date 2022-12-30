#include <stdio.h>
#define TRUE 0
#define FALSE 1


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
	int len = 10001, num, i, count = 0;
	for (i = 1; ; i++)
	{
	    if (IsPrime(i) == TRUE)
	    {
	        count++;
	        if (count == len)
	        {
	            num = i;
	            break;
	        }
	    }
	}
	printf("-----%d\n", num);
	return (0);
}