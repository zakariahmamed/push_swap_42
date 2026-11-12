/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 19:37:21 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/12 21:38:13 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

t_list *ft_parse_args(char *str , t_list *head_a){
    int *ptr;
    int nb =0;
    if(ft_special_check(str)){
        ptr = ft_check_atoi(str,&nb);
        if(!ptr){
            return NULL;
        }
        if(ft_check_dup(head_a , nb) == 0){
            return NULL;
        }
        t_list *new_node = ft_create_node(nb);
        if(!new_node){
            return NULL;  
        }
        head_a = ft_create_stack(head_a , new_node);
        return head_a;
    }
    return NULL;
}