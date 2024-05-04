/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:14:54 by snovakov          #+#    #+#             */
/*   Updated: 2023/09/14 15:14:56 by snovakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit(long int *s1, long int *s2, t_vars *v)
{
	while (s2[0] != v->e)
		ft_pa(s1, s2, v);
	free(s1);
	free(s2);
	free(v->cs);
	exit(0);
}

void	ft_error(long int *s1, long int *s2, t_vars *v)
{
	free(s1);
	free(s2);
	free(v->cs);
	write(1, "Error\n", 6);
	exit(1);
}
