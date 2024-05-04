/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oprtns2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:29:15 by snovakov          #+#    #+#             */
/*   Updated: 2023/09/14 15:29:17 by snovakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rb(long int *s2, t_vars *v, int c)
{
	long int	tmp;
	int			i;

	tmp = s2[0];
	i = 0;
	while (i < v->l2)
	{
		s2[i] = s2[i + 1];
		i++;
	}
	s2[i] = tmp;
	write (1, "rb\n", 3);
	if (c == 1)
		v->lc = 7;
}

void	ft_sa(long int *s1, t_vars *v)
{
	long int	tmp;

	tmp = s1[0];
	s1[0] = s1[1];
	s1[1] = tmp;
	write (1, "sa\n", 3);
	v->lc = 1;
}

void	ft_sb(long int *s2, t_vars *v)
{
	long int	tmp;

	tmp = s2[0];
	s2[0] = s2[1];
	s2[1] = tmp;
	write (1, "sb\n", 3);
	v->lc = 2;
}

void	ft_rra(long int *s1, t_vars *v, int c)
{
	long int	tmp;
	int			i;

	tmp = s1[v->l1];
	i = v->l1;
	while (i > 0)
	{
		s1[i] = s1[i - 1];
		i--;
	}
	s1[i] = tmp;
	write (1, "rra\n", 4);
	if (c == 1)
		v->lc = 9;
}

void	ft_rrb(long int *s2, t_vars *v)
{
	long int	tmp;
	int			i;

	tmp = s2[v->l2];
	i = v->l2;
	while (i > 0)
	{
		s2[i] = s2[i - 1];
		i--;
	}
	s2[i] = tmp;
	write (1, "rrb\n", 4);
	v->lc = 10;
}
