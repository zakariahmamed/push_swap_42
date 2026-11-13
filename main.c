/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 23:02:19 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/13 13:56:29 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
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
*/


/*
#include "push_swap.h"
#include <stdio.h>

static void	print_stack(t_list *head)
{
	t_list	*current;

	current = head;
	printf("Pile A : [ ");
	while (current)
	{
		printf("%d ", current->content);
		current = current->next;
	}
	printf("]\n");
}

static int	test_argument(t_list **head, char *arg)
{
	t_list	*new_node;
	int		nb;

	printf("Argument : \"%s\"\n", arg);
	if (!ft_special_check(arg))
		return (printf("ERREUR : syntaxe invalide\n"), 0);
	if (!ft_check_atoi(arg, &nb))
		return (printf("ERREUR : hors limites\n"), 0);
	printf("Conversion : %d\n", nb);
	if (!ft_check_dup(*head, nb))
		return (printf("ERREUR : doublon\n"), 0);
	new_node = ft_create_node(nb);
	if (!new_node)
		return (printf("ERREUR : malloc\n"), 0);
	*head = ft_create_stack(*head, new_node);
	printf("Insertion : OK\n");
	return (1);
}

int	main(int argc, char **argv)
{
	t_list	*head;
	char	*flags[6];
	int		i;

	flags[0] = "--simple";
	flags[1] = "--complex";
	flags[2] = "--medium";
	flags[3] = "--bench";
	flags[4] = "--adaptive";
	flags[5] = NULL;
	head = NULL;
	i = 1;
	printf("===== TEST PARSING PUSH_SWAP =====\n");
	while (i < argc)
	{
		printf("\n========== TEST %d ==========\n", i);
		if (ft_isflag(flags, argv[i]))
			printf("FLAG RECONNU : %s\n", argv[i]);
		else if (!test_argument(&head, argv[i]))
		{
			printf("Etat de la pile avant liberation :\n");
			print_stack(head);
			ft_free_all(head, NULL);
			return (1);
		}
		print_stack(head);
		i++;
	}
	printf("\n===== RESULTAT FINAL =====\n");
	print_stack(head);
	ft_free_all(head, NULL);
	printf("Memoire liberee\n");
	return (0);
}
*/
#include"push_swap.h"

int	main(int argc, char **argv)
{
	return (push_swap(argc, argv));
}










