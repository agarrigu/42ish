/* This main is used for testing */
#include <stdio.h>
#include <stdlib.h>
#include "int_utils.h" 
#include "math_utils.h" 
#include "put_utils.h" 
#include "str_utils.h" 


int main(void)
{
	int tab[] = { 1, 4, 3, 5, 2 };
	int size = 5;
	int i = 0;

	while (i < size) {
		ft_putnbr(tab[i]);
		i++;
	}	
	ft_sort_int_tab(tab, size);
	while (i < size) {
		ft_putnbr(tab[i]);
		i++;
	}	
	return (0);
}

void 	populate_int_tab(int *tab, int size)
{
	while(size) {
		*(tab + size - 1) = size;
		size--;
	}
}
