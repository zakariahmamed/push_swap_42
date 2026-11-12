/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 19:12:06 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/12 19:12:27 by zahmamed         ###   ########.fr       */
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