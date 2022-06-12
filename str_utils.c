int		ft_strlen(char *str)
{
	char	*p;

	p = str;

	while (*str) {
		str++;
	}

	return (str - p);
}

char	*ft_strcpy(char *dest, char *src)
{

	while (*src) {
		*dest = *src;
		dest++, src++;
	}

	dest++;
	*dest = 0x00;

	return (dest);
}

int		ft_strcmp(char *s1, char *s2)
{
	int	s1_sum;
	int	s2_sum;

	s1_sum = 0;
	s2_sum = 0;

	while (*s1) {
		s1++;
		s1_sum += *s1;
	}

	while (*s2) {
		s2++;
		s2_sum += *s2;
	}

	return (s1_sum - s2_sum);
}

/* TODO: This doesn't work, fix! */
char	*ft_strstr(char *str, char *to_find) 
{
	while (*str) {
		if (ft_strcmp(str, to_find) == 0) {
			return (str);
		}
		str++;
	}

	return (to_find);
}
