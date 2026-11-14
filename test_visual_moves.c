/* ************************************************************************** */
/*   Test visuel local pour Push_swap : compilation hors du Makefile final.   */
/* ************************************************************************** */

#include "push_swap.h"
#include <string.h>

/* Ces prototypes doivent aussi figurer dans ton push_swap.h. */
void ft_ss(t_push *data);
void ft_rrr(t_push *data);

static void init_data(t_push *data)
{
    data->head_a = NULL;
    data->head_b = NULL;
    data->strg = 0;
    data->bench = 0;
}

static void release_data(t_push *data)
{
    ft_free_all(data->head_a, NULL);
    ft_free_all(data->head_b, NULL);
    data->head_a = NULL;
    data->head_b = NULL;
}

static int append_value(t_list **head, char *value)
{
    t_list *updated;

    updated = ft_parse_args(value, *head);
    if (!updated)
    {
        fprintf(stderr, "Argument invalide ou doublon dans une pile : %s\n", value);
        return (0);
    }
    *head = updated;
    return (1);
}

/* Syntaxe : valeurs de A, puis '--', puis valeurs de B. */
static int build_data(t_push *data, int argc, char **argv)
{
    char *default_a[] = {"10", "20", "30", "40", NULL};
    char *default_b[] = {"5", "15", "25", NULL};
    t_list **target;
    int i;

    init_data(data);
    if (argc == 1)
    {
        for (i = 0; default_a[i]; i++)
            if (!append_value(&data->head_a, default_a[i]))
                return (0);
        for (i = 0; default_b[i]; i++)
            if (!append_value(&data->head_b, default_b[i]))
                return (0);
        return (1);
    }
    target = &data->head_a;
    i = 1;
    while (i < argc)
    {
        if (strcmp(argv[i], "--") == 0)
        {
            if (target == &data->head_b)
            {
                fprintf(stderr, "Separateur '--' en double.\n");
                return (0);
            }
            target = &data->head_b;
        }
        else if (!append_value(target, argv[i]))
            return (0);
        i++;
    }
    return (1);
}

static void show_stack(const char *label, t_list *head)
{
    printf("  %-8s sommet -> ", label);
    if (!head)
    {
        puts("NULL");
        return ;
    }
    while (head)
    {
        printf("%d -> ", head->content);
        head = head->next;
    }
    puts("NULL");
}

static int count_nodes(t_list *head)
{
    int count;

    count = 0;
    while (head)
    {
        count++;
        head = head->next;
    }
    return (count);
}

static void show_data(const char *when, const t_push *data)
{
    printf("%s\n", when);
    show_stack("PILE A", data->head_a);
    show_stack("PILE B", data->head_b);
    printf("  Nombre total de noeuds : %d\n",
           count_nodes(data->head_a) + count_nodes(data->head_b));
}

static void apply_move(const char *name, t_push *data)
{
    if (strcmp(name, "sa") == 0)
        ft_sa(data);
    else if (strcmp(name, "sb") == 0)
        ft_sb(data);
    else if (strcmp(name, "ss") == 0)
        ft_ss(data);
    else if (strcmp(name, "pa") == 0)
        (void)ft_pa(data);
    else if (strcmp(name, "pb") == 0)
        (void)ft_pb(data);
    else if (strcmp(name, "ra") == 0)
        (void)ft_ra(data);
    else if (strcmp(name, "rb") == 0)
        (void)ft_rb(data);
    else if (strcmp(name, "rr") == 0)
        ft_rr(data);
    else if (strcmp(name, "rra") == 0)
        (void)ft_rra(data);
    else if (strcmp(name, "rrb") == 0)
        (void)ft_rrb(data);
    else if (strcmp(name, "rrr") == 0)
        ft_rrr(data);
}

int main(int argc, char **argv)
{
    const char *moves[] = {
        "sa", "sb", "ss", "pa", "pb", "ra", "rb", "rr", "rra", "rrb", "rrr", NULL
    };
    const char *sequence[] = {"pb", "rr", "sa", "pa", "rrr", NULL};
    t_push data;
    int i;

    puts("=== VISUALISATION DES 11 MOUVEMENTS PUSH_SWAP ===");
    puts("Chaque mouvement commence avec les memes piles initiales.\n");
    i = 0;
    while (moves[i])
    {
        if (!build_data(&data, argc, argv))
        {
            release_data(&data);
            return (1);
        }
        printf("\n========== MOUVEMENT %-3s ==========\n", moves[i]);
        show_data("AVANT :", &data);
        apply_move(moves[i], &data);
        show_data("APRES :", &data);
        release_data(&data);
        i++;
    }
    if (!build_data(&data, argc, argv))
    {
        release_data(&data);
        return (1);
    }
    puts("\n========== ENCHAINEMENT DE MOUVEMENTS ==========");
    show_data("DEPART :", &data);
    i = 0;
    while (sequence[i])
    {
        printf("\nOperation : %s\n", sequence[i]);
        apply_move(sequence[i], &data);
        show_data("ETAT :", &data);
        i++;
    }
    release_data(&data);
    puts("\nFin du test : les deux piles ont ete liberees.");
    return (0);
}
