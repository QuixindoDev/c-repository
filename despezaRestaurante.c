/*
 * =====================================================================================
 *
 *       Filename:  despezaRestaurante.c
 *
 *    Description: Um programa para calcular despeza em um restaurante 
 *
 *        Version:  1.0
 *        Created:  21/09/2024 21:48:23
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eufrásio QUixindo (), eufrasio.dev@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


#include <stdio.h>

int main(void)
{
	float total, despeza;
	float gorjeta;
	int numPessoas;

	printf("Quanto ficou a conta?\n");
	scanf("%f", &despeza);

	printf("Quantas pessoas para dividir a conta?\n");
	scanf("%d", &numPessoas);

	printf("Qual o valor da gorjeta?\n");
	scanf("%f", &gorjeta);

	total = (despeza * gorjeta / 100 + despeza) / numPessoas;

	printf("Cada um deve pagar: %.2f\n", total);

}
