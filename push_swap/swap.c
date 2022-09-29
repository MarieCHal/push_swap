/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <mchalard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:50:46 by mchalard          #+#    #+#             */
/*   Updated: 2022/03/29 13:49:17 by mchalard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Swap the first 2 elements at the top of stack a.
void	swap_a(t_stack *stk)
{
	int	tmp;

	if (stk->la > 1)
	{
		tmp = stk->a[0];
		stk->a[0] = stk->a[1];
		stk->a[1] = tmp;
	}
	ft_printf("sa\n");
}

void	swap_b(t_stack *stk)
{
	int	tmp;

	if (stk->lb > 1)
	{
		tmp = stk->b[0];
		stk->b[0] = stk->b[1];
		stk->b[1] = tmp;
	}
	ft_printf("sb\n");
}
