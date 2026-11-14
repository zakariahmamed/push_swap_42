/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 18:34:34 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/14 14:34:31 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void ft_sa(t_push *data){
    data->head_a = ft_swap(data ->head_a);
}
void ft_sb(t_push *data){
    data->head_b = ft_swap(data ->head_b);
}
void ft_ss(t_push *data){
    ft_sa(data);
    ft_sb(data);
}

t_list *ft_pb(t_push *data){
    t_list *current_head;
    if(data->head_a){
        current_head = data->head_a;
        data->head_a = data->head_a->next;
        data->head_b = ft_push(current_head , data->head_b);
        return data->head_b;
    }
    return NULL;
}
t_list *ft_pa(t_push *data){
    t_list *current_head;
    if(data->head_b){
        current_head = data->head_b;
        data->head_b = data->head_b->next;
        data->head_a = ft_push(current_head , data->head_a);
        return data->head_a;
    }
    return NULL;
}

t_list *ft_ra(t_push *data){
    t_list *current;
    if(data->head_a && data->head_a->next){
        current = data->head_a;
        data->head_a = data->head_a->next;
        ft_add_back(data->head_a , current);
        return data->head_a;
    }
    return NULL;
}

t_list *ft_rb(t_push *data){
    t_list *current;
    if(data->head_b && data->head_b->next){
        current = data->head_b;
        data->head_b = data->head_b->next;
        ft_add_back(data->head_b , current);
        return data->head_b;
    }
    return NULL;
}
void ft_rr(t_push *data){
    ft_ra(data);
    ft_rb(data);
}

t_list *ft_rra(t_push *data){
    t_list *current;
    t_list *previous;
    if(!data->head_a || ft_nbr_nodes(data->head_a) <= 1)
        return NULL;
    previous = data->head_a;
    current = data->head_a->next;
    while(previous && current->next){
        current = current->next;
        previous = previous->next;
    }
    previous->next = NULL;
    data->head_a = ft_add_front(data->head_a,current);
    return data->head_a;
}

t_list* ft_rrb(t_push *data){
    t_list *current;
    t_list *previous;
    if(!data->head_b || ft_nbr_nodes(data->head_b) <= 1)
        return NULL;
    previous = data->head_b;
    current = data->head_b->next;
    while(previous && current->next){
        current = current->next;
        previous = previous->next;
    }
    previous->next = NULL;
    data->head_b = ft_add_front(data->head_b,current);
    return data->head_b;
}
void ft_rrr(t_push *data){
    ft_rra(data);
    ft_rrb(data);
}