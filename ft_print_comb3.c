/*
 * =====================================================================================
 *
 *       Filename:  ft_print_comb3.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  15/09/2024 19:41:16
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eufrásio QUixindo (), eufrasio.dev@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <unistd.h>

void ft_print_comb2(void)
{
	short v[2];

	v[0] = 0;
	while(v[0] < 99){
		v[1] = v[0] + 1;
		while(v[1] < 100)
		{
			write(1, &v[0], 1);
			write(1, " ", 1);
			write(1, &v[1], 1);
			if (v[0] == 98 && v[1] == 99)
				write(1, ".\n", 2);
			else
				write(1, ", ", 2);

			v[1]++;
		}
		v[0]++;
	}
}

int main(void)
{
	ft_print_comb2();
}

