/*
 * =====================================================================================
 *
 *       Filename:  countdown.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/10/2024 18:12:32
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eufrásio QUixindo (), eufrasio.dev@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <unistd.h>

int main()
{
	int number;

	number = 5;
	while(number > 0)
	{
		printf("%d\n", number);
		sleep(1);
		number--;
	}

	return 0;
}
