/* This main is used for testing */
#include <stdio.h>
#include <stdlib.h>

int		ft_is_prime(int nb);
int		ft_iterative_factorial(int nb);
int 	ft_recursive_factorial(int nb);
int		ft_fibonacci(int index);
int		ft_sqrt(int nb);
void	ft_rev_int_tab(int *tab, int size);
void	ft_swap(int *a, int *b);
void	ft_sort_int_tab(int *tab, int size);
void	quick_sort(int *tab, int low, int high);
void 	ft_putnbr(int nb);
void 	populate_int_tab(int *tab, int size);

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
