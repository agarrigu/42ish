void	ft_rev_int_tab(int *tab, int size)
{
	while (size / 2 > 0) {
		ft_swap(tab, tab + size - 1);
		tab++;
		size -= 2;
	}
}

void	ft_swap(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

void	ft_sort_int_tab(int *tab, int size)
{
	quick_sort(tab, 0, size - 1);
}
