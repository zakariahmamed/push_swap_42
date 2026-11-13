/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 18:51:17 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/13 15:33:40 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int push_swap(int argc , char **argv){
    int i =1;
    t_list *head_a =NULL;
    //t_list *head_b = NULL;
    t_list *stack_a;
    int strg = 0;
    int bench =0;
    char *flags []= {"--simple","--complex","--medium","--adaptive",NULL};
    if(argc > 1 && (ft_count_bench(argv) <=1 && ft_count_flags(flags , argv)<=1)){
        while(i < argc){
            if(ft_isbench(argv[i]))
                bench =1;
            else if(ft_isflag(flags , argv[i]))
                strg = ft_read_flag(argv[i]);
            else{
                stack_a = ft_parse_args(argv[i] , head_a);
                if(!stack_a){
                    ft_putstr_fd(2 , "Error\n");
                    ft_free_all(head_a , NULL);
                    return (1);
                }
                head_a = stack_a ;
            }
            i++;
        }
        /*********** */
        printf("Strategie detectee : ");
        if (strg == 1)
            printf("SIMPLE\n");
        else if (strg == 2)
            printf("MEDIUM\n");
        else if (strg == 3)
            printf("COMPLEX\n");
        else
            printf("ADAPTIVE\n");

        printf("Benchmark : %s\n", bench ? "ON" : "OFF");
        } 
        //free apres avoir fini le traitement
        else{
            ft_putstr_fd(2 , "Error\n");
            ft_free_all(head_a , NULL);
        }
    return (0);
}