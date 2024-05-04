/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:03:01 by snovakov          #+#    #+#             */
/*   Updated: 2023/09/15 12:03:03 by snovakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_chk(long int *s1, t_vars *v)
{
	int	i;

	i = v->p;
	while (i <= v->k && v->cs[i] != v->e)
	{
		if (s1[0] == v->cs[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_solve2(long int *s1, long int *s2, t_vars *v)
{
	while (!(ft_correct(s1, s2, v)))
	{
		if	(s1[0] == v->e || v->k > v->t)
			return ;
		else if (ft_chk(s1, v))
		{
			ft_pb(s1, s2, v);
			v->i++;
		}
		else if (v->i >= v->k)
		{
			v->p = v->p + (v->t / (5 + v->t / 100));
			v->k += v->t / (5 + v->t / 100);
		}
		else
			ft_ra(s1, v, 1);
	}
}

void	ft_solve3(long int *s1, long int *s2, t_vars *v)
{
	int	y;

	v->i = 0;
	while (!(ft_correct(s1, s2, v)))
	{
		if (s1[0] == v->cs[v->i] && s1[0] != v->e)
		{
			ft_pb(s1, s2, v);
			v->i++;
		}
		else
		{
			y = 0;
			while (s1[y] != v->cs[v->i])
				y++;
			if (y <= (v->l1 + 1) / 2)
				while (s1[0] != v->cs[v->i])
					ft_ra(s1, v, 1);
			else
				while (s1[0] != v->cs[v->i])
					ft_rra(s1, v, 1);
		}
	}
	ft_exit(s1, s2, v);
}
