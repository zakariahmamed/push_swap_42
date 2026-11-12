/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 20:36:15 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/12 20:36:37 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void ft_print_list(t_list *head){
    t_list *current = head;
    while(current){
        printf("%d\n",current->content);
        current = current->next;
    }
}
