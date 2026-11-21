/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 18:51:17 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/14 14:55:50 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static int ft_process_arg(t_push *data , char *arg){
    t_list *stack_a;
    if(ft_isbench(arg))
        data->bench =1;
    else if(ft_isflag(arg))
        data->strg = ft_read_flag(arg);
    else{
        stack_a = ft_parse_args(arg , data->head_a);
        if(!stack_a)
                return (0);
        data->head_a = stack_a ;
    }  
    return (1); 
}
static t_push set_data_zero(void){
    t_push data;
    
    data.head_a = NULL;
    data.head_b = NULL;
    data.strg = 0;
    data.bench = 0;
    return data;
}
int push_swap(int argc , char **argv){
    t_push data;
    int i =1;
    data = set_data_zero();
    if(argc > 1 && (ft_count_bench(argv) <=1 && ft_count_flags(argv)<=1)){
        while(i < argc){
            if(ft_process_arg(&data , argv[i]))
                i++;
            else{
                ft_putstr_fd(2 , "Error\n");
                ft_free_all(data.head_a , NULL);
                return (1);
            }
        }
        //data.head_a = ft_sort_list(&data);
        ft_print_list(data.head_a);
        ft_free_all(data.head_a , NULL);
        return (0);
    } 
    else if(argc == 1)
        return (0);
    else{
        ft_putstr_fd(2 , "Error\n");
        return (1);
    }
}