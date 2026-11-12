/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_atoi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 13:57:57 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/11 22:28:54 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int ft_atoi(char *tab){
    size_t i = 0;
    int sign = 1;
    long int result = 0;
    while(tab[i]){
        if(tab[i] == '-' || tab[i] == '+'){
            if(tab[i] == '-')
                sign *=-1;
            i++;
        }
        else{
            result = result *10 + (tab[i] - '0');
            i++;
        }
    }
    return (result *sign);
}