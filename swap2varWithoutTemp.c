/*
 * =====================================================================================
 *
 *       Filename:  swap2varWithoutTemp.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  21/09/2024 21:20:15
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eufrásio QUixindo (), eufrasio.dev@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(){
	int a, b;

	a = 20;
	b = 2;

	printf("a: %d\tb: %d\n", a, b);

	a = a + b;
	b = a - b;
	a = a - b;

	printf("a: %d\tb: %d\n", a, b);

}

