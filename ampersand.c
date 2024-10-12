/*
 * =====================================================================================
 *
 *       Filename:  ampersand.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/10/2024 21:02:11
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eufrásio QUixindo (), eufrasio.dev@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

void addition(int a, int b, int *target)
{
	*target = a + b;

	return;
}

int main()
{
	int x = 15;
	int y = 5;
	int answer;

	addition(x, y, &answer);
	printf("%d\n", answer);

	return 0;
}
