/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <mchalard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:54:01 by mchalard          #+#    #+#             */
/*   Updated: 2022/03/29 17:52:44 by mchalard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	*abis;
	int	len;
	int	la;
	int	lb;
}				t_stack;

int		main(int argc, char **argv);
char	**ft_split(char const *s, char c);
int		ft_atoi(const char *str, t_stack *stk);
void	ft_index(t_stack *stack);
void	check_argv(char *str, t_stack *stk);
void	check_double(t_stack *stk, int j);
void	replace(t_stack *stk);
void	swap_a(t_stack *stk);
void	swap_b(t_stack *stk);
void	push_a(t_stack *stk);
void	push_b(t_stack *stk);
void	rot_a(t_stack *stk);
int		ft_printf(const char *format, ...);
void	sort(t_stack *stk);
void	radix(t_stack *stk);
void	sortfive(t_stack *stk);
void	sortthree(t_stack *stk);
int		sortcheck(t_stack *stk);
void	structfree(t_stack *stk);

#endif
