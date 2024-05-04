/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opract.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:53:11 by snovakov          #+#    #+#             */
/*   Updated: 2023/09/14 15:53:12 by snovakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_plus(long int *s1, long int *s2, t_vars *v)
{
	v->tmp1 = v->a1;
	v->tmp2 = v->a2;
	while (v->a1 > 0 && v->a2 > 0)
	{
		ft_rr(s1, s2, v);
		v->a1--;
		v->a2--;
	}
	while (v->a1 > 0)
	{
		ft_ra(s1, v, 1);
		v->a1--;
	}
	while (v->a2 > 0)
	{
		ft_rb(s2, v, 1);
		v->a2--;
	}
}

void	ft_minus(long int *s1, long int *s2, t_vars *v)
{
	v->tmp1 = v->a1;
	v->tmp2 = v->a2;
	while (v->a1 < 0 && v->a2 < 0)
	{
		ft_rrr(s1, s2, v);
		v->a1++;
		v->a2++;
	}
	while (v->a1 < 0)
	{
		ft_rra(s1, v, 1);
		v->a1++;
	}
	while (v->a2 < 0)
	{
		ft_rrb(s2, v);
		v->a2++;
	}
}

void	ft_minus2(long int *s1, long int *s2, t_vars *v)
{
	while (v->tmp1 < 0 && v->tmp2 < 0)
	{
		ft_ss(s1, s2, v);
		ft_rr(s1, s2, v);
		v->tmp1++;
		v->tmp2++;
	}
	while (v->tmp1 < 0)
	{
		ft_sa(s1, v);
		ft_ra(s1, v, 1);
		v->tmp1++;
	}
	while (v->tmp2 < 0)
	{
		ft_sb(s2, v);
		ft_rb(s2, v, 1);
		v->tmp2++;
	}
}

void	ft_bplus(long int *s1, long int *s2, t_vars *v)
{
	v->tmp1 = v->b1;
	v->tmp2 = v->b2;
	while (v->b1 > 0 && v->b2 > 0)
	{
		ft_rr(s1, s2, v);
		v->b1--;
		v->b2--;
	}
	while (v->b1 > 0)
	{
		ft_ra(s1, v, 1);
		v->b1--;
	}
	while (v->b2 > 0)
	{
		ft_rb(s2, v, 1);
		v->b2--;
	}
}

void	ft_bminus(long int *s1, long int *s2, t_vars *v)
{
	v->tmp1 = v->b1;
	v->tmp2 = v->b2;
	while (v->b1 < 0 && v->b2 < 0)
	{
		ft_rrr(s1, s2, v);
		v->b1++;
		v->b2++;
	}
	while (v->b1 < 0)
	{
		ft_rra(s1, v, 1);
		v->b1++;
	}
	while (v->b2 < 0)
	{
		ft_rrb(s2, v);
		v->b2++;
	}
}
