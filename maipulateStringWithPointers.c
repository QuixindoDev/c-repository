/*
 * =====================================================================================
 *
 *       Filename:  maipulateStringWithPointers.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  29/09/2024 14:00:38
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
	char palavra[] = "Hello World";
	char *str = palavra;

	while(*str != '\0')
	{
		printf("%c", *str);
		str++;
	}

	printf("\n");

	return 0;
}

