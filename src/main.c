/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:24:22 by nprimo            #+#    #+#             */
/*   Updated: 2022/04/28 12:36:43 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

int	main(void)
{
	char 	*input;
	t_list	*token_list;

	input = readline(PROMPT);
	printf("INPUT: %s\n", input);
	add_history(input);
	token_list = NULL;
	get_token_list(input, &token_list);
	while(token_list->next)
	{
		printf("%s ", token_list->content);
		token_list = token_list->next;		
	}
	free(input);
	return (0);
}
