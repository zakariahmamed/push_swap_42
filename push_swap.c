/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 13:20:34 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/11 23:18:23 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int push_swap(int argc , char **argv){
    long int nb;
    int rcp;
    int i =1;
    t_list *head_a = NULL;
    char error[]= "Error\n";
    if(argc <= 1){
        return 0;
    }
    else{
        while(i < argc){
            rcp = ft_special_check(argv[i]);
            if(rcp == 1){
                nb = ft_atoi(argv[i]);
                if(nb >= INT_MIN && nb <= INT_MAX ){
                    t_list *res = ft_create_nodes(nb);
                    if(!res){
                        ft_free_all(head_a , NULL);
                        return (1);
                    }
                    head_a = ft_create_stack(head_a , res);
                    if(!head_a){
                        ft_free_all(head_a , NULL);
                        ft_putstr(2,error);
                        return (1);
                    }
                }
                else{
                    //cas depassement du plage int min max
                    ft_free_all(head_a , NULL);
                    ft_putstr(2 , error);
                    return(1);
                }
            }
            else{
                //cas dinvalide pointer
                ft_free_all(head_a ,NULL);
                ft_putstr(2,error);
                return (1);
            }
            i++;
        }
    }
    ft_print_list(head_a);
    ft_free_all(head_a,NULL);
    return (0);
}
