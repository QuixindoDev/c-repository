/*
 * =====================================================================================
 *
 *       Filename:  allocate.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/10/2024 04:09:54
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

int main ()
{
	int *ptr;

	ptr = malloc (5 * sizeof(int));

	if (ptr == NULL)
		printf("Problemas ao alocar memoria\n");

	for(int i = 0, j = 10; i < 5; i++, j+= 10)
	{
		*(ptr + i) = j;
		printf("ptr + %d = %d\n", i, *(ptr+i));
	}

	return 0;	
}
