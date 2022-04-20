#include <limits.h>
#include <unistd.h>

void	ft_putnbr(int nb);
void	tf_putunbr(unsigned int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str) {
		write(1, str, 1);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == INT_MIN) {
		ft_putstr("-2147483647");
	}
	else if (nb < 0) {
		nb *= -1;
		ft_putchar('-');
	}
	if (nb >= 0 && nb < 10) {
		ft_putchar(nb + 0x30);	
	}
	else {
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	tf_putunbr(unsigned int nb)
{
	if (nb < 10) {
		ft_putchar(nb + 0x30);	
	}
	else {
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
