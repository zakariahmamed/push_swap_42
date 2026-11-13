/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 18:51:17 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/13 13:45:48 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int push_swap(int argc , char **argv){
    int i =1;
    t_list *head_a =NULL;
    //t_list *head_b = NULL;
    t_list *stack_a;
    char *flags []= {"--simple","--complex","--medium","--bench","--adaptive",NULL};
    if(argc > 1){
        while(i < argc){
            if(ft_isflag(flags , argv[i])){
                printf("i find a flag\n");
                i++;
            }
            else{
                stack_a = ft_parse_args(argv[i] , head_a);
                if(!stack_a){
                    ft_putstr_fd(2 , "Error\n");
                    ft_free_all(head_a , NULL);
                    return (1);
                }
                head_a = stack_a ;
                //ft_print_list(head_a);
                i++;
            }
        }
    }
    //free apres avoir fini le traitement
    ft_print_list(head_a); 
    ft_free_all(head_a , NULL);
    return (0);
}