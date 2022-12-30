#include <stdio.h>
#include "num.h"

int main(int argc, char *argv[])
{
        char *arr = str;
        int len = sizeof(str) /                                                        sizeof(char);
        long int temp = 1, prod = 1;
        for (int i = 0; arr[i] != '\0'; i++)
        {
            for (int j = i; j < i + 13 ; j++)
                temp *= (arr[j] - '0');
            if (temp > prod)
                prod = temp;
            temp = 1;
        }
        printf("[*]  %li\n", prod);
	    return 0;
}