/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etravers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:17:30 by etravers          #+#    #+#             */
/*   Updated: 2023/01/13 14:17:44 by etravers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/push_swap.h"

void	sw_a(t_stack **start, int j)
{
	t_stack	*head;
	t_stack	*temp;
	t_stack	*next;

	head = NULL;
	temp = NULL;
	next = NULL;
	if ((*start)->next == NULL || *start == NULL)
		return ;
	head = (*start)->next;
	temp = (*start)->next->next;
	next = *start;
	head->next = next;
	next->next = temp;
	*start = head;
	if (j == 1)
		write(1, "sa\n", 3);
}

void	push_a(t_stack **stack_a, t_stack **stack_b, int j)
{
	t_stack	*temp1;

	temp1 = *stack_b;
	addtop(stack_a, (*stack_b)->val, (*stack_b)->group);
	*stack_b = temp1->next;
	free(temp1);
	if (j == 1)
		write(1, "pa\n", 3);
}

void	rot_a(t_stack **stack_a, int j)
{
	rot_base(stack_a);
	if (j == 1)
		write(1, "ra\n", 3);
}

void	rr_a(t_stack **stack_a, int j)
{
	rr_base(stack_a);
	if (j == 1)
		write(1, "rra\n", 4);
}
