/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isflag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 20:25:35 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/12 21:35:49 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_strcmp(char *str1 , char *str2){
    int i =0;
    while(str1[i] && str2[i] && str1[i] == str2[i]){
        i++;
    }
    return (str1[i] - str2[i]);
}
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