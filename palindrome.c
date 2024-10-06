/*
 * =====================================================================================
 *
 *       Filename:  palindrome.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  29/09/2024 15:56:25
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eufrásio QUixindo (), eufrasio.dev@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void movePToEnd(char *str);

int main()
{
	char *str = "Hello";
	char *pTmp;
	int size = 0;
	
	 // Alocar memória para o buffer temporário
    	pTmp = (char *)malloc((size + 1) * sizeof(char));  // +1 para o caractere nulo

    	// Verificar se a alocação foi bem-sucedida
    	if (pTmp == NULL) {
        	printf("Erro ao alocar memória.\n");
        	return 1;
    	}

	while(*str != '\0')
		size++;

	int i = 0;
	while(size > 0)
	{
		pTmp[i] = str[size - 1];
		i++;
		size--;
	}

	pTmp[i] = '\0';

	    // Exibir a string original e a reversa
    printf("String original: %s\n", str);
    printf("String reversa: %s\n", pTmp);

    // Liberar a memória alocada
    free(pTmp);
	return 0;
}

