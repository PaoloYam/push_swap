/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:42:47 by pyammoun          #+#    #+#             */
/*   Updated: 2021/11/11 19:14:47 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n);

/*int	main(void)
{

	return (0);
}*/

/*int	ft_len(unsigned int n)
{
	int	c;

	c = 0;
	while (n > 0)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

void	ft_neg(int n, unsigned int *n2, int	*r, int *c)
{
	*n2 = n;
	*c = 1;
	*n2 = n * -1;
	*r = 1;
}

char	*ft_itoa(int n)
{
	char				*numb;
	unsigned int		n2;
	int					c;
	int					r;

	c = 0;
	r = 0;
	n2 = n;
	if (n < 0)
		ft_neg(n, &n2, &r, &c);
	c = c + ft_len(n2);
	numb = malloc(sizeof(char) * (c + 1));
	if (numb == NULL)
		return (NULL);
	numb[c] = '\0';
	c--;
	while (c >= 0)
	{
		numb[c] = ((n2 % 10) + '0');
		n2 = n2 / 10;
		c--;
	}
	if (r == 1)
		numb[0] = '-';
	return (numb);
}*/

static unsigned int	get_nb_digit(long n_l, int sign)
{
	unsigned int	nb_digit;

	if (n_l == 0)
		return (1);
	nb_digit = 0;
	while (n_l > 0)
	{
		n_l /= 10;
		nb_digit++;
	}
	if (sign == -1)
		nb_digit++;
	return (nb_digit);
}

static void	convert_nb(char *outstr, long n_l, unsigned int nb_digit,
		int sign)
{
	outstr[nb_digit] = '\0';
	outstr[--nb_digit] = n_l % 10 + '0';
	n_l /= 10;
	while (n_l > 0)
	{
		outstr[--nb_digit] = n_l % 10 + '0';
		n_l /= 10;
	}
	if (sign == -1)
		outstr[0] = '-';
}

char	*ft_itoa(int n)
{
	char			*outstr;
	long			n_l;
	unsigned int	nb_digit;
	int				sign;

	sign = 1;
	if (n < 0)
	{
		n_l = (long)n * -1;
		sign = -1;
	}
	else
		n_l = n;
	nb_digit = get_nb_digit(n_l, sign);
	outstr = malloc(sizeof(char) * (nb_digit + 1));
	if (outstr == NULL)
		return (NULL);
	convert_nb(outstr, n_l, nb_digit, sign);
	return (outstr);
}
