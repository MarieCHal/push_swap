/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <mchalard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:06:39 by mchalard          #+#    #+#             */
/*   Updated: 2022/03/29 18:11:32 by mchalard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rot_a(t_stack *stk)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stk->a[0];
	while (i < stk->la)
	{
		stk->a[i] = stk->a[i + 1];
		i++;
	}
	stk->a[i - 1] = tmp;
	ft_printf("ra\n");
}
