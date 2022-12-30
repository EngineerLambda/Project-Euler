#include <stdio.h>

int main(int argc, char *argv[])
{
	long int sum = 2, n1 = 1, n2 = 2, n3, i;
	printf("%li %li ", n1, n2);
	for (i = 0; n2 < 4000000; i++)
	{
	    n3 = n2 + n1;
	    printf("%li ", n3);
	    if (n3 % 2 == 0)
	        sum += n3;
	    n1 = n2;
	    n2 = n3;
	}
	printf("\n%li\n", sum);
	return (0);
}