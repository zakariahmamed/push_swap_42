/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_flags.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 19:08:45 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/12 21:02:19 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char *ft_get_flags(char **flags,char **list_arg){
    int i =1;
    while(list_arg[i]){
        if(ft_isflag(flags,list_arg[i])){
            return list_arg[i];
        }
        i++;
    }
    return NULL;
}