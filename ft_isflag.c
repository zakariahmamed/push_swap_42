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


int ft_isflag(char *arg){
    if(ft_strcmp("--simple",arg) || ft_strcmp("--medium",arg) || ft_strcmp("--complex",arg) || ft_strcmp("--adaptive",arg))
        return (1);
    return (0);
}
