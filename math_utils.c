/* TODO better `max_poss` for `ft_is_prime`. */
#include <stdlib.h>
#include "math_utils.h"

int ft_iterative_factorial(int nb)
{
    int result;

    result = 1;

    if (nb < 0) {
        return (0); // or result = 0 ???
    }

    while (nb > 1) {
        result *= nb;
        nb--;
    }

    return (result);
}

int ft_recursive_factorial(int nb) 
{
    if (nb < 0) {
        return (0);
    }

    if (nb <= 1) {
        return (1);
    }

    return (ft_recursive_factorial(nb - 1) * nb);
}

int ft_iterative_power(int nb, int power)
{
    int result;

    result = 1;

    if (power < 0) {
        return (0);
    }

    while (power > 1) {
        result *= nb;
        power--;
    }

    return (result);
}

int ft_recursive_power(int nb, int power)
{
    if (power <= 0) {
        return (1);
    }

    if (power < 1) {
        return (nb);
    }

    return (ft_recursive_power(nb, power - 1) * nb);
}

int ft_fibonacci(int index)
{
    if (index < 0) {
        return (-1);
    }
    
    if (index == 0) {
        return (0);
    }
    
    if (index == 1) {
        return (1);
    }

    return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int ft_sqrt(int nb)
{
    int i;

    i = 2;

    if (nb == 1) {
        return (1);
    }

    while (i < nb / 2) {
        if (nb / i ==  i && nb % i == 0) {
            return (i);
        }
        i++;
    }
    
    return (0);
}

int ft_is_prime(int nb)
{
    int is_prime;
    int *primes;
    int max_poss;
    int *three;

    if (nb < 2) {
        is_prime = 0;
    }

    else if (nb == 2 || nb == 3) {
        is_prime = 1;
    }

    else if ((nb - 1) % 6 != 0 && (nb + 1) % 6 != 0) {
        is_prime = 0;
    }

    else {
        max_poss = nb / 3;
        primes = (int *) malloc(max_poss * sizeof(int));
        three = primes;
        zero_out_tab(primes, 0, max_poss);
        populate_primes(primes, max_poss);
        is_prime = 1;
        while (*primes) {
            if (nb % *primes == 0) {
                is_prime = 0;
                break;
            }
            primes++;
        }
        free(three);
    }
    return (is_prime);
}

int sixn(int i)
{
    return (i * 6);
}

void zero_out_tab(int *tab, int zero, int size)
{
    while (size > 0) {
        *tab = zero;
        tab++;
        size--;
    }
}

void populate_primes(int *tab, int max)
{
    int i;
    int *three;

    *tab = 3;
    while (sixn(i) < max) {
        while (*tab) {
            if ((sixn(i) - 1) % *tab == 0) {
                break;
            }
            tab++;
        }
        if (!*tab) {
            *tab = sixn(i) - 1;
        }
        tab = three;
        while (*tab) {
            if ((sixn(i) + 1) % *tab == 0) {
                break;
            }
            tab++;
        }       
        if (!*tab) {
            *tab = sixn(i) + 1;
        }
        tab = three;
        i++;
    }
}
