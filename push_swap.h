/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 13:19:33 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/11 22:58:15 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct s_list{
    int content;
    struct s_list *next;
}   t_list;

int push_swap(int argc , char **argv);
int ft_special_check(char *tab);
void ft_putstr(int fd , char *str);
t_list *ft_create_stack(t_list *head , t_list *new_node);
t_list *ft_create_nodes(int content);
long int ft_atoi(char *tab);
int ft_check_dup(t_list *head , t_list *n);
void ft_free_all(t_list *head , t_list *new_node);
void ft_print_list(t_list *head);
#endif