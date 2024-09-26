/*
 * =====================================================================================
 *
 *       Filename:  fib.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  26/09/2024 20:57:16
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eufrásio QUixindo (), eufrasio.dev@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint64_t    fib(int n)
{
    static uint64_t arr[1337]={0};
    if (0 == n)
	    return 0;
    else if (1==n)
	    return 1;
    else
    {
      if (arr[n])
	      return arr[n];
      arr[n] = fib(n - 1) + fib(n-2);
      return arr[n];
    }
}

int main(int ac, char**av)
{
	int n = atoi(av[1]);
	for(int i = 0; i<n; i++)
		printf("fibonacci %2d = %llu\n", i, fib(i));
}

