/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_nodes.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 13:27:26 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/11 22:28:51 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *ft_create_nodes(int content){
    t_list *new_node = malloc(sizeof(t_list));
    if(!new_node){
        return NULL;
    }
    new_node->content = content;
    new_node->next = NULL;
    return (new_node);
}