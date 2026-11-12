/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_parsing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 23:02:19 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/11 23:10:10 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <limits.h>
#include "push_swap.h"

int push_swap(int argc, char **argv);

int main(void)
{
    char *tests[][8] = {
        {"./push_swap", NULL},
        {"./push_swap", "42", NULL},
        {"./push_swap", "1", "2", "3", NULL},
        {"./push_swap", "3", "2", "1", NULL},
        {"./push_swap", "0", "-1", "+42", NULL},
        {"./push_swap", "1", "1", NULL},
        {"./push_swap", "0", "-0", NULL},
        {"./push_swap", "2147483647", NULL},
        {"./push_swap", "-2147483648", NULL},
        {"./push_swap", "2147483648", NULL},
        {"./push_swap", "-2147483649", NULL},
        {"./push_swap", "", NULL},
        {"./push_swap", "+", NULL},
        {"./push_swap", "-", NULL},
        {"./push_swap", "12a", NULL},
        {"./push_swap", "1.5", NULL},
        {"./push_swap", " 42", NULL},
        {"./push_swap", "42 ", NULL},
        {"./push_swap", "999999999999999999999999999999", NULL},
        {"./push_swap", "-999999999999999999999999999999", NULL},
        {"./push_swap", "1", "2", "abc", NULL},
        {"./push_swap", "1", "2", "2147483648", NULL},
        {"./push_swap", "1", "2", "1", NULL},
        {"./push_swap", "00042", "42", NULL},
        {"./push_swap", "1 2 3", NULL}
    };
    int count = sizeof(tests) / sizeof(tests[0]);
    int i;
    int argc;
    int ret;

    i = 0;
    while (i < count)
    {
        argc = 0;
        while (tests[i][argc])
            argc++;
        printf("\n========== TEST %d ==========\n", i + 1);
        fflush(stdout);
        ret = push_swap(argc, tests[i]);
        printf("Retour = %d\n", ret);
        i++;
    }
    return (0);
}
