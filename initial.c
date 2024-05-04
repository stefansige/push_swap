/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initial.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:15:08 by snovakov          #+#    #+#             */
/*   Updated: 2023/09/14 15:15:10 by snovakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_atoi(char *str, long int *s1, long int *s2, t_vars *v)
{
	int			sign;
	int			i;
	long int	nb;

	i = 0;
	nb = 0;
	sign = 1;
	while (str[i] <= ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			ft_error(s1, s2, v);
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	if ((nb * sign) > 2147483647 || (nb * sign) < -2147483648)
		ft_error(s1, s2, v);
	return (nb * sign);
}

void	ft_put(char *argv[], long int *s1, long int *s2, t_vars *v)
{
	int	i;
	int	y;
	int	k;

	i = 0;
	while (s1[i] != 2147483648)
	{
		s1[i] = ft_atoi(argv[i + 1], s1, s2, v);
		s2[i] = 2147483648;
		i++;
	}
	i = 0;
	while (s1[i] != 2147483648)
	{
		y = 0;
		k = 0;
		while (s1[y] != 2147483648)
			if (s1[i] > s1[y++])
				k++;
		v->cs[k] = s1 [i];
		i++;
	}
}

void	ft_check(long int *s1, long int *s2, t_vars *v)
{
	int	i;
	int	k;
	int	y;

	k = 0;
	while (s1[k] != 2147483648)
	{
		i = 0;
		y = 0;
		while (s1[y] != 2147483648)
		{
			if (s1[k] == s1[y])
				i++;
			y++;
		}
		if (i > 1)
			ft_error(s1, s2, v);
		k++;
	}
}

void	ft_init(t_vars *v, int argc)
{
	v->e = 2147483648;
	v->l1 = argc - 2;
	v->l2 = -1;
	v->t = argc - 1;
	v->m = v->cs[(v->t / 2) - 1];
	v->m2 = v->cs[(v->t / 4) - 1];
	v->m1 = v->cs[((v->t - (v->t / 4)) - 1)];
	v->a1 = 0;
	v->b1 = 0;
	v->a2 = 0;
	v->b2 = 0;
	v->i = -1;
	v->p = 0;
	v->s = v->t / (5 + v->t / 100);
	v->k = v->s;
}
