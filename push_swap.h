/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 19:14:48 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/13 15:35:57 by zahmamed         ###   ########.fr       */
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
void ft_putstr_fd(int fd , char *str);
t_list *ft_create_stack(t_list *head , t_list *new_node);
t_list *ft_create_node(int content);
int *ft_check_atoi(char *tab , int *dest);
int ft_check_dup(t_list *head , int n);
void ft_free_all(t_list *head , t_list *new_node);
void ft_print_list(t_list *head);
int ft_isflag(char **flags , char *arg);
t_list *ft_parse_args(char *str , t_list *head_a);
int ft_count_bench(char **list_arg);
int ft_isbench(char *flag);
int ft_read_flag(char *flag);
int ft_count_flags(char **flags,char **list_arg);
int ft_strcmp(char *str1 , char *str2);
#endif