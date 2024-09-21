/*
 * =====================================================================================
 *
 *       Filename:  printreversealfabet.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  15/09/2024 13:13:03
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eufrásio QUixindo (), eufrasio.dev@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	short c;

	c = 123;
	while(--c > 96)
		write(1, &c, 1);
}

int main(void)
{
	ft_print_reverse_alphabet();
	write(1, "\n", 1);
	return 0;
}

