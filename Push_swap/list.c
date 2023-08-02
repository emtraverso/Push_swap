/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etravers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:22:38 by etravers          #+#    #+#             */
/*   Updated: 2023/01/13 14:22:40 by etravers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/push_swap.h"

void	release(t_stack *start)
{
	t_stack	*i;
	t_stack	*next;

	i = start;
	next = NULL;
	while (i)
	{
		next = i->next;
		free(i);
		i = next;
	}
}

int	lst_size(t_stack *start)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = start;
	while (tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
