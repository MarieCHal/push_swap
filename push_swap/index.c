/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <mchalard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 15:59:13 by mchalard          #+#    #+#             */
/*   Updated: 2022/03/29 13:45:25 by mchalard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_end(t_stack *stk)
{
	int	i;

	i = 0;
	while (i < stk->len)
	{
		if (i + 1 < stk->len)
		{
			if (stk->abis[i] > stk->abis[i + 1])
				return (1);
		}
		i++;
	}
	return (0);
}

void	ft_index(t_stack *stk)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < stk->len)
	{
		if (i + 1 < stk->len)
		{
			if (stk->abis[i] > stk->abis[i + 1])
			{
				tmp = stk->abis[i];
				stk->abis[i] = stk->abis[i + 1];
				stk->abis[i + 1] = tmp;
			}
			i++;
		}
		else
		{
			if (ft_end(stk) == 1)
				i = 0;
			else
				i++;
		}
	}
}
