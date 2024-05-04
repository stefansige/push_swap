/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_action.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:39:01 by snovakov          #+#    #+#             */
/*   Updated: 2023/09/14 15:39:08 by snovakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_smaller(long int *s1, long int *s2, t_vars *v)
{
	ft_bminus(s1, s2, v);
	v->tmp1++;
	v->tmp2++;
	ft_minus2(s1, s2, v);
	ft_rr(s1, s2, v);
}

static void	ft_action4(long int *s1, long int *s2, t_vars *v)
{
	if (v->b2 > 0)
	{
		ft_bplus(s1, s2, v);
		ft_plus2(s1, s2, v);
		ft_sb(s2, v);
		ft_rb(s2, v, 1);
	}
	else if (v->b2 < 0)
	{
		ft_bminus(s1, s2, v);
		v->tmp2++;
		ft_minus2(s1, s2, v);
		ft_rb(s2, v, 1);
	}
}

static void	ft_action3(long int *s1, long int *s2, t_vars *v)
{
	if (v->b1 > 0)
	{
		ft_bplus(s1, s2, v);
		ft_plus2(s1, s2, v);
		ft_sa(s1, v);
		ft_ra(s1, v, 1);
	}
	else if (v->b1 < 0)
	{
		ft_bminus(s1, s2, v);
		v->tmp1++;
		ft_minus2(s1, s2, v);
		ft_ra(s1, v, 1);
	}
	ft_action4(s1, s2, v);
}

static void	ft_action2(long int *s1, long int *s2, t_vars *v)
{
	if (v->a1 > 0 || v->a2 > 0)
	{
		ft_plus(s1, s2, v);
		ft_plus2(s1, s2, v);
	}
	if (v->a1 < 0)
	{
		ft_minus(s1, s2, v);
		v->tmp1++;
		ft_minus2(s1, s2, v);
		ft_sa(s1, v);
	}
	if (v->a2 < 0)
	{
		ft_minus(s1, s2, v);
		v->tmp2++;
		ft_minus2(s1, s2, v);
		ft_sb(s2, v);
	}
	ft_action3(s1, s2, v);
}

void	ft_action(long int *s1, long int *s2, t_vars *v)
{
	if (v->a1 > 0 && v->a2 > 0)
	{
		ft_plus(s1, s2, v);
		ft_plus2(s1, s2, v);
	}
	else if (v->a1 < 0 && v->a2 < 0)
	{
		ft_minus(s1, s2, v);
		v->tmp1++;
		v->tmp2++;
		ft_minus2(s1, s2, v);
		ft_ss(s1, s2, v);
	}
	else if (v->b1 > 0 && v->b2 > 0)
	{
		ft_bplus(s1, s2, v);
		ft_plus2(s1, s2, v);
		ft_ss(s1, s2, v);
		ft_rr(s1, s2, v);
	}
	else if (v->b1 < 0 && v->b2 < 0)
		ft_smaller(s1, s2, v);
	else
		ft_action2(s1, s2, v);
}
