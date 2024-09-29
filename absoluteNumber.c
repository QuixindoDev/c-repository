/*
 * =====================================================================================
 *
 *       Filename:  absoluteNumber.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  28/09/2024 19:59:35
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eufrásio QUixindo (), eufrasio.dev@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <unistd.h>

int check(int num)
{
	if (num < 0)
		return -num;
	else
		return num;
}

int main()
{
	int num;
	write(1, "Por favor, digite o valor que deseja calcular: \n", 48);
	read(1, &num, 4);
	check(num);

	return (1);
}

