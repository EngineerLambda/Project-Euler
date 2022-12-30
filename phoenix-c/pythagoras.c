#include<stdio.h>

int main(int argc, char *argv[])
{
	int a, b, c, m, n, sum, prod;
	for (m = 2 ;sum <= 1000 ; m++)
	{
	    n = 1;
	    while (n < m)
	    {
	        int k = 1;
	        while (sum <= 1000)
	        {
	        a = k * (m * m - n * n);
	        b = 2 * k * m * n;
    	    c = k * (m * m + n * n);
	        sum = a + b + c;
	        prod = a * a + b*b;
	        if (prod == c*c)
	            printf(" %d,  %d,  %d   |   %d\n", a,  b, c, sum);
	        k++;
	        }
    	    n++;
    	}
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}