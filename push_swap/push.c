/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <mchalard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:42:28 by mchalard          #+#    #+#             */
/*   Updated: 2022/03/29 13:49:35 by mchalard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_a(t_stack *stk)
{
	int	i;

	i = 0;
	stk->b[0] = stk->a[0];
	while (i < stk->la)
	{
		stk->a[i] = stk->a[i + 1];
		i++;
	}
	stk->la = stk->la - 1;
	ft_printf("pb\n");
}

void	move_b(t_stack *stk)
{
	int	i;

	i = 0;
	stk->a[0] = stk->b[0];
	while (i < stk->lb)
	{
		stk->b[i] = stk->b[i + 1];
		i++;
	}
	stk->lb = stk->lb - 1;
	ft_printf("pa\n");
}

void	push_a(t_stack *stk)
{
	int	i;
	int	tmp;
	int	tmp2;

	i = 0;
	if (stk->lb > 0)
	{
		stk->la = stk->la + 1;
		while (i < stk->la)
		{
			if (i == 0)
			{
				tmp = stk->a[i + 1];
				stk->a[i + 1] = stk->a[i];
			}
			else
			{
				tmp2 = stk->a[i + 1];
				stk->a[i + 1] = tmp;
				tmp = tmp2;
			}
			i++;
		}
	}
	move_b(stk);
}

void	push_b(t_stack *stk)
{
	int	i;
	int	tmp;
	int	tmp2;

	i = 0;
	if (stk->la > 0)
	{
		stk->lb = stk->lb + 1;
		while (i < (stk->lb))
		{
			if (i == 0)
			{
				tmp = stk->b[i + 1];
				stk->b[i + 1] = stk->b[i];
			}
			else
			{
				tmp2 = stk->b[i + 1];
				stk->b[i + 1] = tmp;
				tmp = tmp2;
			}
			i++;
		}
	}
	move_a(stk);
}
