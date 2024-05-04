/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:15:40 by snovakov          #+#    #+#             */
/*   Updated: 2023/09/14 15:15:42 by snovakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_a(long int *s, t_vars *v, int i)
{
	int	a;

	a = v->l1;
	while (v->cs[i + 1] != s[a])
		a--;
	if (a > (v->l1 + 1) / 2 + 1)
		a = a - v->l1 - 1;
	else
		a = a - 1;
	return (a);
}

int	ft_b(long int *s, t_vars *v, int i)
{
	int	b;

	b = v->l1;
	while (v->cs[i - 1] != s[b])
		b--;
	if (b > (v->l1 + 1) / 2)
		b = b - v->l1 - 1;
	else
		b = b - 1;
	return (b);
}

int	ft_a2(long int *s, t_vars *v, int i)
{
	int	a;

	a = v->l2;
	while (v->cs[i - 1] != s[a])
		a--;
	if (a > (v->l2 + 1) / 2 + 1)
		a = a - v->l2 - 1;
	else
		a = a - 1;
	return (a);
}

int	ft_b2(long int *s, t_vars *v, int i)
{
	int	b;

	b = v->l2;
	while (v->cs[i + 1] != s[b])
		b--;
	if (b > (v->l2 + 1) / 2)
		b = b - v->l2 - 1;
	else
		b = b - 1;
	return (b);
}
