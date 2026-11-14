/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 19:11:40 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/14 14:48:40 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
static void ft_add_back(t_list *head , t_list* new_node){
    t_list *current = head;
    while(current && current ->next != NULL){
        current = current -> next;
    }
    current->next = new_node;
}
*/
t_list *ft_create_stack(t_list *head , t_list *new_node){
    t_list *current = head;
    if(current == NULL){
        head = new_node;
        return head;
    }
    ft_add_back(head , new_node);
        return head;
}