#include <stdio.h>
#define MIN 100
#define MAX 999
#define ISPAL 1
#define ISNOTPAL 0

#include <string.h>
#include <stdlib.h>

void swap(char *x, char *y) {
    char t = *x; *x = *y; *y = t;
}
 
char* reverse(char *buffer, int i, int j)
{
    while (i < j) {
        swap(&buffer[i++], &buffer[j--]);
    }
 
    return buffer;
}

char* itoa(int value, char* buffer, int base)
{
    if (base < 2 || base > 32) {
        return buffer;
    }
    int n = abs(value);
 
    int i = 0;
    while (n)
    {
        int r = n % base;
 
        if (r >= 10) {
            buffer[i++] = 65 + (r - 10);
        }
        else {
            buffer[i++] = 48 + r;
        }
 
        n = n / base;
    }
    if (i == 0) {
        buffer[i++] = '0';
    }
    if (value < 0 && base == 10) {
        buffer[i++] = '-';
    }
 
    buffer[i] = '\0';
    return reverse(buffer, 0, i - 1);
}

int main(int argc, char *argv[])
{
	char buffer[32], *str, *rev;
	int i, j, new, prod,  largePal = 0;
	for (i = MIN; i <= MAX; i++)
	{
	    for (j = MIN; j <= MAX; j++)
	    {
	        prod = i * j;
	        str = itoa(prod, buffer, 10);
	        rev = reverse(str, 0, strlen(str) - 1);
	        new = atoi(rev);
	        if (prod == new && prod > largePal)
	           largePal = prod;
	    }
	}
	printf("%d\n", largePal);
	return (0);
}