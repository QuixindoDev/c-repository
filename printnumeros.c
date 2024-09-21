/*
 * =====================================================================================
 *
 *       Filename:  printnumeros.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  15/09/2024 13:26:53
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eufrásio QUixindo (), eufrasio.dev@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <unistd.h>

void ft_print_numbers(void)
{
	short n;
	
	n = 47;
	while(++n < 58)
		write(1, &n, 1);
}

int main(void)
{
	ft_print_numbers();
	write(1, "\n", 1);
}
