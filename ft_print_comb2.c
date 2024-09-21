/*
 * =====================================================================================
 *
 *       Filename:  ft_print_comb2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  15/09/2024 18:13:02
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eufrásio QUixindo (), eufrasio.dev@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

void pc()
{
    char v[] = {'0', '1', '2'};

    while (1) // Laço infinito
    {
        // Imprime a combinação atual
        for (int i = 0; i < 3; i++) 
            printf("%c", v[i]);

        if (v[0] == '7' && v[1] == '8' && v[2] == '9')
        {
            printf(".\n");
            break; // Termina quando atinge a combinação '789'
        }
        else
        {
            printf(", ");
        }

        // Incrementa o último dígito
        v[2]++;

        // Se o último dígito chegar a '9' + 1, ajusta
        if (v[2] > '9')
        {
            v[1]++;   // Incrementa o dígito do meio
            v[2] = v[1] + 1; // Último dígito deve ser sempre maior que o do meio
        }

        // Se o dígito do meio chegar a '9' + 1, ajusta
        if (v[1] > '8') 
        {
            v[0]++;   // Incrementa o primeiro dígito
            v[1] = v[0] + 1; // O do meio deve ser maior que o primeiro
            v[2] = v[1] + 1; // O último deve ser maior que o do meio
        }
    }
}

int main()
{
    pc();
    return 0;
}
