/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 18:51:17 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/13 18:09:10 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static int ft_process_arg(t_push *data , char *arg , char **flags){
    t_list *stack_a;
    if(ft_isbench(arg))
        data->bench =1;
    else if(ft_isflag(flags , arg))
        data->strg = ft_read_flag(arg);
    else{
        stack_a = ft_parse_args(arg , data->head_a);
        if(!stack_a)
                return (0);
        data->head_a = stack_a ;
    }  
    return (1); 
}
int push_swap(int argc , char **argv){
    t_push data;
    int i =1;
    char *flags []= {"--simple","--complex","--medium","--adaptive",NULL};
    data.head_a = NULL;
    data.head_b = NULL;
    data.strg = 0;
    data.bench = 0;
    if(argc > 1 && (ft_count_bench(argv) <=1 && ft_count_flags(flags , argv)<=1)){
        while(i < argc){
            if(ft_process_arg(&data , argv[i],flags))
                i++;
            else{
                ft_putstr_fd(2 , "Error\n");
                ft_free_all(data.head_a , NULL);
                return (1);
            }
        }
        //sort 
        //ft_sort_list(&data);
        ft_print_list(data.head_a);
        ft_free_all(data.head_a , NULL);
        return (0);
    } 
    else if(argc == 1){
        return (0);
    }
    else{
        ft_putstr_fd(2 , "Error\n");
        return (1);
    }
}