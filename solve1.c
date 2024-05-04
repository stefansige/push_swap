/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:15:32 by snovakov          #+#    #+#             */
/*   Updated: 2023/09/14 15:15:33 by snovakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_plus2(long int *s1, long int *s2, t_vars *v)
{
	while (v->tmp1 > 0 && v->tmp2 > 0)
	{
		ft_ss(s1, s2, v);
		ft_rrr(s1, s2, v);
		v->tmp1--;
		v->tmp2--;
	}
	while (v->tmp1 > 0)
	{
		ft_sa(s1, v);
		ft_rra(s1, v, 1);
		v->tmp1--;
	}
	while (v->tmp2 > 0)
	{
		ft_sb(s2, v);
		ft_rrb(s2, v);
		v->tmp2--;
	}
}

void	ft_rset(long int *s, t_vars *v, int c)
{
	v->a1 = 0;
	v->a2 = 0;
	v->b1 = 0;
	v->b2 = 0;
	if (c == 1)
		ft_ra(s, v, 1);
	else if (c == 2)
		ft_rb(s, v, 1);
}

void	ft_ra(long int *s1, t_vars *v, int c)
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
	write (1, "ra\n", 3);
	if (c == 1)
		v->lc = 6;
}

void	ft_solve(long int *s1, long int *s2, t_vars *v)
{
	while (!(ft_correct(s1, s2, v)))
	{
		if ((s2[0] < s2[1] && s2[1] != v->e && s2[0] <= v->m2 && \
		s2[1] <= v->m2) || (s2[0] < s2[1] && s2[1] != v->e && s2[0] > v->m2 \
		&& s2[1] > v->m2))
			ft_sb(s2, v);
		else if (s1[0] <= v->m)
			ft_pb(s1, s2, v);
		else if ((s1[0] > s1[1] && s1[0] <= v->m1 && s1[1] <= v->m1 && \
		s1[1] > v->m) || (s1[0] > s1[1] && s1[0] > v->m1 && s1[1] > v->m1))
			ft_sa(s1, v);
		else if (s2[0] < s2[1] && s2[1] != v->e && s2[0] <= v->m2 && \
		s2[1] > v->m2)
			ft_rb(s2, v, 1);
		else if (s1[0] > s1[1] && s1[0] > v->m1 && s1[1] <= v->m1)
			ft_ra(s1, v, 1);
		else if (v->l1 > (v->t / 2) || s1[0] != v->cs[v->t / 2])
			ft_ra(s1, v, 1);
		else if (s2[0] != v->m && s2[0] != v->e && s2[1] != v->e)
			ft_rb(s2, v, 1);
		else
			return ;
	}
	ft_exit(s1, s2, v);
}

void	ft_short(long int *s1, long int *s2, t_vars *v)
{
	while (!(ft_correct(s1, s2, v)))
	{
		if (s1[0] > s1[v->l1])
			ft_ra(s1, v, 1);
		else if (s1[v->l1] > s1[0] && s1[v->l1] != v->cs[v->l1])
			ft_rra(s1, v, 1);
		else if (s1[0] > s1[1])
			ft_sa(s1, v);
	}
	ft_exit(s1, s2, v);
}
