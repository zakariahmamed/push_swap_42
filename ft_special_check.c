/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_special_check.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 13:28:16 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/11 22:28:43 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static int ft_all_num(char *str){
    size_t i =0;
    if(str[i] == '\0'){
        return (0);
    }
    while(str[i]){
        if(!(str[i] >= '0' && str[i] <= '9')){
            return (0);
        }
        i++;
    }
    return (1);
}

static int ft_issign(char c){
    if(c == '+' || c == '-'){
        return (1);
    }
    return (0);
}

int ft_special_check(char *tab){
    if( ft_issign(tab[0]) && ft_all_num(&tab[1])){
          return (1);
    }
    else if (!ft_issign(tab[0]) && ft_all_num(tab)){
        return (1);
    }
    return 0;
}