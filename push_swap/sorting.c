/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <mchalard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 14:27:17 by mchalard          #+#    #+#             */
/*   Updated: 2022/03/29 18:10:41 by mchalard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sortfive2(t_stack *stk)
{
	int	i;

	if (stk->b[0] < stk->b[1])
		swap_b(stk);
	i = stk->lb;
	while (i > 0)
	{
		push_a(stk);
		i--;
	}
	if (stk->la > 4)
		rot_a(stk);
	rot_a(stk);
}

void	sortfive(t_stack *stk)
{
	if (sortcheck(stk))
	{
		while (sortcheck(stk) != 0)
		{
			if (stk->a[0] > 2)
				push_b(stk);
			if (stk->a[0] <= 2)
			{
				if (stk->la == 3)
					sortthree(stk);
				else
					rot_a(stk);
			}
		}
		sortfive2(stk);
	}
}

void	sortthree(t_stack *stk)
{
	while (sortcheck(stk) != 0)
	{
		if (stk->a[0] > stk->a[1])
		{
			if (stk->a[0] == 1 && stk->a[1] == 0)
				swap_a(stk);
			else if (stk->a[0] == 2 && stk->a[1] == 1)
				rot_a(stk);
			else if (stk->a[0] == 2 && stk->a[1] == 0)
				rot_a(stk);
		}
		else
		{
			if (stk->a[0] == 0 && stk->a[1] == 2)
				swap_a(stk);
			rot_a(stk);
		}
	}
}

void	radix(t_stack *stk)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = stk->la;
	while (i < size)
	{
		j = 0;
		while (sortcheck(stk) != 0 && j < size)
		{
			if (stk->a[0] >> i & 1)
				rot_a(stk);
			else
				push_b(stk);
			j++;
		}
		j = stk->lb;
		while (j > 0)
		{
			push_a(stk);
			j--;
		}
		i++;
	}
}
