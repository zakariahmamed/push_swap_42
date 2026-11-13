/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reserve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 17:50:51 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/13 17:50:55 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int push_swap(int argc , char **argv){
    int i =1;
    t_list *head_a =NULL;
    t_list *head_b = NULL;
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
    } 
    else{
        ft_putstr_fd(2 , "Error\n");
        ft_free_all(head_a , NULL);
    }
    return (0);
}*/