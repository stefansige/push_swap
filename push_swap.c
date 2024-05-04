/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:01:35 by snovakov          #+#    #+#             */
/*   Updated: 2023/09/14 16:01:36 by snovakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	long int	*s1;
	long int	*s2;
	t_vars		v;

	s1 = malloc(sizeof(long int) * argc);
	s2 = malloc(sizeof(long int) * argc);
	v.cs = malloc(sizeof(long int) * argc);
	if (argc < 3)
		exit(0);
	s1[argc - 1] = 2147483648;
	s2[argc - 1] = 2147483648;
	v.cs[argc - 1] = 2147483648;
	ft_put(argv, s1, s2, &v);
	ft_check(s1, s2, &v);
	ft_init(&v, argc);
	if (v.t <= 3)
		ft_short(s1, s2, &v);
	else if (v.t < 100)
	{
		ft_solve(s1, s2, &v);
		while (s2[0] != v.e)
			ft_pa(s1, s2, &v);
		ft_solve3(s1, s2, &v);
	}
	else
	{
		ft_solve(s1, s2, &v);
		while (s2[0] != v.e)
			ft_pa(s1, s2, &v);
		ft_solve2(s1, s2, &v);
		while (s2[0] != v.e)
			ft_pa(s1, s2, &v);
		ft_solve3(s1, s2, &v);
	}
}
