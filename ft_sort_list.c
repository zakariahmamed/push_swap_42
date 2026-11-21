/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakaria <zakaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 10:52:42 by zakaria           #+#    #+#             */
/*   Updated: 2026/11/21 10:52:49 by zakaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

t_list *ft_sort_list(t_push *data){
    if(data->strg == 1)
        data->head_a = ft_simple_sort(data);
    else if (data->strg == 2)
        data->head_a = ft_medium_sort(data);
    else if (data->strg == 3)
        data->head_a = ft_complex_sort(data);
    else{
        data->head_a = ft_adaptive_sort(data);
    }
}