/*
 * =====================================================================================
 *
 *       Filename:  unsignedOperator.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  21/09/2024 14:16:59
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eufrásio QUixindo (), eufrasio.dev@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

int main(void){
	unsigned int x = 2147483647; // 0 ...4.294.967.295
	// 4 * 8 = 32
	
	printf("\n\t %u \n\n", ++x);
	return 0;
}
