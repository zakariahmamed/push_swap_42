/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_flags.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 19:08:45 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/13 15:04:01 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_count_flags(char **list_arg){
    int i =1;
    int c_f = 0;
    while(list_arg[i]){
        if(ft_isflag(list_arg[i]))
            c_f++;
        i++;
    }
    return c_f;
}
int ft_count_bench(char **list_arg){
    int i =1;
    int c_b =0;
    while(list_arg[i]){
        if(ft_isbench(list_arg[i]))
            c_b++;
        i++;
    }
    return c_b;
}
int ft_isbench(char *flag){
    if(ft_strcmp(flag , "--bench")){
        return 1;
    }
    return 0;
}
int ft_read_flag(char *flag){
    if(!ft_strcmp(flag , "--simple")){
        return 1;
    }
    else if(!ft_strcmp(flag , "--medium")){
        return 2;
    }
    else if(!ft_strcmp(flag , "--complex")){
        return 3;
    }
    else{
        return 0;
    }
}