/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkerror.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <mchalard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 10:23:58 by mchalard          #+#    #+#             */
/*   Updated: 2022/03/29 14:59:24 by mchalard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	structfree(t_stack *stk)
{
	free (stk->a);
	free (stk->b);
	free (stk->abis);
}

//checks if there are two times the same number
void	check_double(t_stack *stk, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		if (stk->a[i] == stk->a[j])
		{
			ft_printf("%s\n", "Error");
			structfree(stk);
			exit(0);
		}
		i++;
	}
}

//checks if there are only numbers in the list of arguments
void	check_argv(char *str, t_stack *stk)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 48 || str[i] > 57) && str[i] != 45)
		{
			ft_printf("%s\n", "Error");
			structfree(stk);
			exit(0);
		}
		i++;
	}
}
