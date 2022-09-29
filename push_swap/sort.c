/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <mchalard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:23:07 by mchalard          #+#    #+#             */
/*   Updated: 2022/03/30 11:01:41 by mchalard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sortcheck(t_stack *stk)
{
	int	i;

	i = 0;
	while (i < stk->la)
	{
		if (i + 1 < stk->la)
		{
			if (stk->a[i] > stk->a[i + 1])
				return (1);
		}
		i++;
	}
	return (0);
}

void	sort(t_stack *stk)
{
	if (stk->la < 4)
		sortthree(stk);
	else if (stk->la < 6 && stk->la > 3)
		sortfive(stk);
	else
		radix(stk);
}
