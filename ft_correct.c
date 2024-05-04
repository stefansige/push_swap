/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_correct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:21:59 by snovakov          #+#    #+#             */
/*   Updated: 2023/09/14 15:22:00 by snovakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_cor1(long int *s1, t_vars *v)
{
	int	i;
	int	y;

	y = v->l2 + 1;
	i = 0;
	while (s1[i] != v->e)
	{
		if (s1[i] != v->cs[y])
			return (0);
		i++;
		y++;
	}
	return (1);
}

int	ft_cor2(long int *s2, t_vars *v)
{
	int	i;
	int	y;

	y = v->l2;
	i = 0;
	while (s2[i] != v->e)
	{
		if (s2[i] != v->cs[y])
			return (0);
		i++;
		y--;
	}
	return (1);
}

int	ft_correct(long int *s1, long int *s2, t_vars *v)
{
	int	i;
	int	y;

	i = v->l2;
	y = 0;
	while (s2[i] != v->e && i >= 0)
	{
		if (s2[i] != v->cs[y++])
			return (0);
		i--;
	}
	i = 0;
	while (s1[i] != v->e)
	{
		if (s1[i] != v->cs[y++])
			return (0);
		i++;
	}
	return (1);
}
