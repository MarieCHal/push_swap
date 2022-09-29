/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <mchalard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:57:13 by mchalard          #+#    #+#             */
/*   Updated: 2022/04/01 09:52:33 by mchalard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	abis(t_stack *stk)
{
	int	i;

	i = 0;
	while (i < stk->la)
	{
		stk->abis[i] = stk->a[i];
		i++;
	}
}

void	val_a(t_stack *stk, int *tmp)
{
	int	i;

	i = 0;
	while (i < stk->len)
	{
		stk->a[i] = tmp[i];
		i++;
	}
}

void	replace(t_stack *stk)
{
	int	i;
	int	j;
	int	*tmp;

	i = 0;
	abis(stk);
	ft_index(stk);
	tmp = malloc(stk->len * sizeof(int));
	if (!tmp)
		ft_printf("Error malloc");
	while (i < stk->len)
	{
		j = 0;
		while (j < stk->len)
		{
			if (stk->a[i] == stk->abis[j])
				tmp[i] = j;
			j++;
		}
		i++;
	}
	val_a(stk, tmp);
	free(tmp);
}
