/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:21:18 by snovakov          #+#    #+#             */
/*   Updated: 2023/09/14 17:21:21 by snovakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_vars
{
	int			l1;
	int			l2;
	int			hn;
	int			t;
	int			m;
	int			m1;
	int			lc;
	int			i;
	int			p;
	int			s;
	int			k;
	long int	m2;
	long int	a1;
	long int	b1;
	long int	a2;
	long int	b2;
	long int	tmp1;
	long int	tmp2;
	long int	*cs;
	long int	e;
}	t_vars;

void	ft_action(long int *s1, long int *s2, t_vars *v);
void	ft_exit(long int *s1, long int *s2, t_vars *v);
void	ft_error(long int *s1, long int *s2, t_vars *v);
void	ft_put(char *argv[], long int *s1, long int *s2, t_vars *v);
void	ft_check(long int *s1, long int *s2, t_vars *v);
void	ft_init(t_vars *v, int argc);
void	ft_plus2(long int *s1, long int *s2, t_vars *v);
void	ft_plus(long int *s1, long int *s2, t_vars *v);
void	ft_minus(long int *s1, long int *s2, t_vars *v);
void	ft_minus2(long int *s1, long int *s2, t_vars *v);
void	ft_bplus(long int *s1, long int *s2, t_vars *v);
void	ft_bminus(long int *s1, long int *s2, t_vars *v);
void	ft_rr(long int *s1, long int *s2, t_vars *v);
void	ft_ss(long int *s1, long int *s2, t_vars *v);
void	ft_rrr(long int *s1, long int *s2, t_vars *v);
void	ft_pb(long int *s1, long int *s2, t_vars *v);
void	ft_pa(long int *s1, long int *s2, t_vars *v);
void	ft_ra(long int *s1, t_vars *v, int c);
void	ft_rb(long int *s2, t_vars *v, int c);
void	ft_sa(long int *s1, t_vars *v);
void	ft_sb(long int *s2, t_vars *v);
void	ft_rra(long int *s1, t_vars *v, int c);
void	ft_rrb(long int *s2, t_vars *v);
void	ft_rset(long int *s, t_vars *v, int c);
void	ft_short(long int *s1, long int *s2, t_vars *v);
void	ft_solve(long int *s1, long int *s2, t_vars *v);
void	ft_solve2(long int *s1, long int *s2, t_vars *v);
void	ft_solve3(long int *s1, long int *s2, t_vars *v);
int		ft_b2(long int *s, t_vars *v, int i);
int		ft_a2(long int *s, t_vars *v, int i);
int		ft_b(long int *s, t_vars *v, int i);
int		ft_a(long int *s, t_vars *v, int i);
int		ft_cor1(long int *s1, t_vars *v);
int		ft_cor2(long int *s2, t_vars *v);
int		ft_correct(long int *s1, long int *s2, t_vars *v);

#endif
