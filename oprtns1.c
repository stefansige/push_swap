/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oprtns1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:29:05 by snovakov          #+#    #+#             */
/*   Updated: 2023/09/14 15:29:07 by snovakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rr(long int *s1, long int *s2, t_vars *v)
{
	long int	tmp;
	int			i;

	tmp = s1[0];
	i = 0;
	while (i < v->l1)
	{
		s1[i] = s1[i + 1];
		i++;
	}
	s1[i] = tmp;
	tmp = s2[0];
	i = 0;
	while (i < v->l2)
	{
		s2[i] = s2[i + 1];
		i++;
	}
	s2[i] = tmp;
	write (1, "rr\n", 3);
	v->lc = 8;
}

void	ft_ss(long int *s1, long int *s2, t_vars *v)
{
	long int	tmp;

	tmp = s1[0];
	s1[0] = s1[1];
	s1[1] = tmp;
	tmp = s2[0];
	s2[0] = s2[1];
	s2[1] = tmp;
	write (1, "ss\n", 3);
	v->lc = 3;
}

void	ft_rrr(long int *s1, long int *s2, t_vars *v)
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
	tmp = s2[v->l2];
	i = v->l2;
	while (i > 0)
	{
		s2[i] = s2[i - 1];
		i--;
	}
	s2[i] = tmp;
	write (1, "rrr\n", 4);
	v->lc = 11;
}

void	ft_pb(long int *s1, long int *s2, t_vars *v)
{
	int	i;

	v->l2++;
	i = v->l2;
	while (i > 0)
	{
		s2[i] = s2[i - 1];
		i--;
	}
	s2[i] = s1[0];
	i = 0;
	while (i < v->l1)
	{
		s1[i] = s1[i + 1];
		i++;
	}
	s1[i] = v->e;
	v->l1--;
	write (1, "pb\n", 3);
}

void	ft_pa(long int *s1, long int *s2, t_vars *v)
{
	int	i;

	v->l1++;
	i = v->l1;
	while (i > 0)
	{
		s1[i] = s1[i - 1];
		i--;
	}
	s1[i] = s2[0];
	i = 0;
	while (i < v->l2)
	{
		s2[i] = s2[i + 1];
		i++;
	}
	s2[i] = v->e;
	v->l2--;
	write (1, "pa\n", 3);
}
