/*
 * =====================================================================================
 *
 *       Filename:  pointers.c
 *
 *    Description: Learning 'bout pointers 
 *
 *        Version:  1.0
 *        Created:  19/09/2024 20:45:17
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eufrásio QUixindo (), eufrasio.dev@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

//Ponteiros, sao variaveis que armazenam enderecos de memoria.
//E para acessar o valor da variavel que o ponteiro aponta, usamos o operador unario (*)
//Para atribuirmos uma variavel a um ponteiro, usamos o operador unario (&) asseguir o nome da variavel
//

#include <stdio.h>

void quadrado(int *n)
{
	*n = (*n) * (*n);
}

int main(void)
{
	//int a;
	//int *p; 
	
	//a = 5;
	//p = &a;

	//*p = 10;
	//printf("%d\n", a);

	int x = 7;
	quadrado(&x);
	printf("%d\n", x);
	return 0;
}
