/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:42:19 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/12 19:54:23 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_check_dup(t_list *head , int n){
    t_list *current = head;
    while(current && current -> content != n){
        current = current ->next;
    }
    if(current == NULL){
        return (1);
    }
    return (0);
}