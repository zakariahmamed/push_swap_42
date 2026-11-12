/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:42:19 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/11 22:28:57 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_check_dup(t_list *head , t_list *n){
    t_list *current = head;
    while(current && current -> content != n->content){
        current = current ->next;
    }
    if(current == NULL){
        return (1);
    }
    else{
        return (0);
    }
}