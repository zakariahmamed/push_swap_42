/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isflag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 20:25:35 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/13 15:36:45 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int ft_isflag(char **flags , char *arg){
    int i = 0;
    while(flags[i]){
        if(ft_strcmp(flags[i],arg) == 0){
            return (1);
        }
        i++;
    }
    return (0);
}
