void	quick_sort(int *tab, int low, int high);
int		partition(int *tab, int low, int high);
void	ft_swap(int *a, int *b);

void	quick_sort(int *tab, int low, int high)
{
	int pi;

	pi = partition(tab, low, high);
	quick_sort(tab, low, pi - 1);
	quick_sort(tab, pi + 1, high);
}
int	partition(int *tab, int low, int high)
{
	int pivot;
	int i;
	int j;

	pivot = tab[high];
	i = low - 1;
	j = low;
	while (j <= high - 1) {
		if (tab[j] < pivot) {
			i++;
			ft_swap(&tab[i], &tab[j]);
		}
	}
	ft_swap(&tab[i + 1], &tab[high]);
	return (i + 1);
}
