/*
 * =====================================================================================
 *
 *       Filename:  artitmeticaPonteiros.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  29/09/2024 12:58:51
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eufrásio QUixindo (), eufrasio.dev@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main()
{
	int arr[] = {10, 11, 12, 13};
	int *p = arr;

	for(int i = 0; i < 4; i++, p++)
	{
		printf("O valor na posicao %d do array eh %d\n", i, *p);
	}

	return (1);
}
