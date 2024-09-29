/*
 * =====================================================================================
 *
 *       Filename:  swapValuesWithPointers.c
 *
 *    Description: Escreva uma função que troque os valores de duas variáveis usando ponteiros. A função deve receber dois ponteiros como argumentos. 
 *
 *        Version:  1.0
 *        Created:  29/09/2024 13:11:26
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eufrásio QUixindo (), eufrasio.dev@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

void swapValuesWithPointers(int *p1, int *p2);

int main()
{
	int num1 = 10;
	int num2 = 20;
	swapValuesWithPointers(&num1, &num2);
	printf("Num 1 = %d\nNum 2 = %d\n", num1, num2);
}

void swapValuesWithPointers(int *p1, int *p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

