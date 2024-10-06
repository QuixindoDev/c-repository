/*
 * =====================================================================================
 *
 *       Filename:  linkedV1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/10/2024 06:54:59
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

struct node
{
	int data;
	struct node *next;
};

int main()
{
	struct node *head, *middle, *last;

	head	= malloc(sizeof(struct node));
	middle	= malloc(sizeof(struct node));
	last	= malloc(sizeof(struct node));

	head->data	= 10;
	middle->data	= 20;
	last->data	= 30;

	head->next	= middle;
	middle->next	= last;
	last->next	= NULL;

	return 0;
}
