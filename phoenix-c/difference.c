#include <stdio.h>

int main(int argc, char *argv[])
{
	int dif, sum_sq = 0, sum_num = 0, i;    for (i = 1; i <= 100; i++)
	{
	    sum_num += i;
	    sum_sq += i * i;
	}
	dif = sum_sq - (sum_num * sum_num);
	printf("---%d\n", dif);
	return (0);
}