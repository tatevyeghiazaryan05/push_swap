/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artavagy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 22:27:56 by artavagy          #+#    #+#             */
/*   Updated: 2026/04/11 19:31:24 by tyeghiaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>

typedef struct a_data
{
	int		argc;
	char	**argv;
}		t_arg;

typedef struct s_list
{
        int value;
        struct s_list  *next;
} t_node;

typedef struct s_list
{
        t_node *head;
        int size;
} t_stack;

void	parsing(t_arg *args);

size_t	ft_strlcpy(char dst[], const char src[], size_t size);

char	**ft_split(char const *s, char c);

t_node	*ft_lstnew(void *content);

void	ft_lstadd_back(t_list **lst, t_list *new);
#endif
