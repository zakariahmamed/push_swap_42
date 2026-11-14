/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 18:17:32 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/14 14:28:11 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_nbr_nodes(t_list *head){
    t_list *current = head;
    int count =0;
    while(current){
        count++;
        current = current ->next;
    }
    return count;
}
t_list *ft_swap(t_list *head){
    if(head && head->next){
        t_list *current = head;
        head = head->next;
        current ->next = head->next;
        head->next = current;
    }
    return head;
}
t_list *ft_add_front(t_list *head , t_list *new_node){
    if(!new_node)
        return NULL;
    new_node->next = head;
    head = new_node;
    return head;
}
t_list *ft_push(t_list *src , t_list *dest){
    t_list *new_dest;
    if(!src)
        return NULL;
    new_dest = ft_add_front(dest , src);
    if(!new_dest)
        return NULL;
    return new_dest; 
}
void ft_add_back(t_list *head , t_list* new_node){
    t_list *current = head;
    while(current && current ->next != NULL){
        current = current -> next;
    }
    current->next = new_node;
    new_node->next = NULL;
}