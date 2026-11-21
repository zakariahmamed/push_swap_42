/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_atoi.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 19:09:36 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/12 20:53:37 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	ft_atoi(char *tab)
{
	size_t		i;
	int			sign;
	long int	result;
	long int	limit;

	i = 0;
	sign = 1;
	result = 0;
	if (tab[i] == '-' || tab[i] == '+')
	{
		if (tab[i] == '-')
			sign = -1;
		i++;
	}
	limit = INT_MAX;
	if (sign == -1)
		limit = -(long int)INT_MIN;
	while (tab[i])
	{
		if (result > (limit - (tab[i] - '0')) / 10)
			return ((long int)INT_MAX + 1);
		result = result * 10 + tab[i] - '0';
		i++;
	}
	return (result * sign);
}

int	*ft_check_atoi(char *tab, int *dest)
{
	long int	nb;

	if (!tab || !dest)
		return (NULL);
	nb = ft_atoi(tab);
	if (nb >= INT_MIN && nb <= INT_MAX)
	{
		*dest = (int)nb;
		return (dest);
	}
	return (NULL);
}