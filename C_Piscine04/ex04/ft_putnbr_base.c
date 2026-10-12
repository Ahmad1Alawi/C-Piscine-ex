/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalawi <ahalawi@student.42wolfsburg.de>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-10 12:56:22 by ahalawi           #+#    #+#             */
/*   Updated: 2026-10-10 12:56:22 by ahalawi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| (base[i] >= 9 && base[i] <= 13) || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	num;

	base_len = check_base(base);
	if (base_len < 2)
		return ;
	num = nbr;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num >= base_len)
		ft_putnbr_base(num / base_len, base);
	write(1, &base[num % base_len], 1);
}
