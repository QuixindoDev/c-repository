/*
 * =====================================================================================
 *
 *       Filename:  binarySearch.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/10/2024 16:09:28
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eufrásio QUixindo (), eufrasio.dev@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int binarySearch(int arr[], int start, int end, int key)
{
	int mid;
	while(start <= end)
	{
		mid = (start + end) / 2;

		if(arr[mid] == key)
			return 1;
		if(arr[mid] < key)
			start = mid + 1;
		else
			end = mid - 1;
	}

	return 0;
}

int main()
{
	
}
