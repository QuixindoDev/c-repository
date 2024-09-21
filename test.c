/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description: Simple test 
 *
 *        Version:  1.0
 *        Created:  19/09/2024 22:00:38
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eufrásio QUixindo (), eufrasio.dev@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(void)
{
	int idade;
	int *p;
	
	p = &idade;

	scanf("%d", p);

	printf("A idade e de :%d\n", idade);
}

