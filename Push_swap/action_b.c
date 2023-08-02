/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etravers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:29:08 by etravers          #+#    #+#             */
/*   Updated: 2023/01/13 15:29:11 by etravers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/push_swap.h"

void	sw_b(t_stack **start, int j)
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
		write(1, "sb\n", 3);
}

void	push_b(t_stack **stack_a, t_stack **stack_b, int j)
{
	t_stack	*temp1;

	temp1 = *stack_a;
	addtop(stack_b, (*stack_a)->val, (*stack_a)->group);
	*stack_a = temp1->next;
	free(temp1);
	if (j == 1)
		write(1, "pb\n", 3);
}

void	rot_b(t_stack **stack_a, int j)
{
	rot_base(stack_a);
	if (j == 1)
		write(1, "rb\n", 3);
}

void	rr_b(t_stack **stack_a, int j)
{
	rr_base(stack_a);
	if (j == 1)
		write(1, "rrb\n", 4);
}
