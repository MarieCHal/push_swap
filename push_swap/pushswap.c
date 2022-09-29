/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <mchalard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:21:19 by mchalard          #+#    #+#             */
/*   Updated: 2022/04/08 11:14:54 by mchalard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//atoi
void	put_atoi(t_stack *stk, char *tmp, int j)
{
	int	ival;

	ival = ft_atoi(tmp, stk);
	stk->a[j] = ival;
}

//initialize the struct
void	initialize(t_stack *stk, char **result)
{
	int	i;

	i = 0;
	while (result[i])
		i++;
	stk->len = i;
	stk->la = i;
	stk->lb = 0;
	stk->a = malloc(i * sizeof(int));
	if (!stk->a)
		ft_printf("Error malloc");
	stk->b = malloc(i * sizeof(int));
	if (!stk->b)
		ft_printf("Error malloc");
	stk->abis = malloc(i * sizeof(int));
	if (!stk->abis)
		ft_printf("Error malloc");
}

//changes char into int
void	put_int(char **result, t_stack *stk)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	initialize(stk, result);
	while (result[j])
	{
		check_argv(&result[j][0], stk);
		put_atoi(stk, &result[j][0], j);
		check_double(stk, j);
		j++;
	}
}

int	main(int argc, char **argv)
{
	t_stack	stk;
	int		i;
	char	**split;

	i = 0;
	if (argc < 2)
		exit (0);
	if (argc == 2)
	{
		split = ft_split(argv[1], ' ');
		put_int(split, &stk);
		while (split[i])
		{
			free(split[i]);
			i++;
		}
	}
	if (argc > 2)
		put_int((argv + 1), &stk);
	replace(&stk);
	sort(&stk);
	structfree(&stk);
}
