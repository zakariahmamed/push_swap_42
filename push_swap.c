/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 18:51:17 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/12 21:36:43 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int push_swap(int argc , char **argv){
    int i =1;
    t_list *head_a =NULL;
    //t_list *head_b = NULL;
    char *flags []= {"--simple","--complex","--medium","--bench","--adaptive",NULL};
    if(argc > 1){
        while(i < argc){
            if(ft_isflag(flags , argv[i])){
                printf("i find a flag\n");
                i++;
            }
            else{
                head_a = ft_parse_args(argv[i] , head_a);
                if(!head_a){
                    ft_putstr_fd(2 , "Error\n");
                    ft_free_all(head_a , NULL);
                    return (1);
                }
                //ft_print_list(head_a);
                i++;
            }
        }
    }
    return (0);
}