/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 19:10:47 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/12 20:42:06 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *ft_create_node(int content){
    t_list *new_node = malloc(sizeof(t_list));
    if(!new_node){
        return NULL;
    }
    new_node->content = content;
    new_node->next = NULL;
    return (new_node);
}