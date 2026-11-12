/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 22:33:16 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/11 22:33:39 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_free_all(t_list *head , t_list *new_node){
    t_list *current = head;
    while(current != NULL){
        head = head->next;
        free(current);
        current = head;
    }
    free(new_node);
}