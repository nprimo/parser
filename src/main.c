/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:24:22 by nprimo            #+#    #+#             */
/*   Updated: 2022/04/22 17:44:31 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

int	main(void)
{
	char 	*input;
	t_list	*token_list;

	token_list = NULL;	
	input = readline(PROMPT);
	token_list = get_token_list(input);
	printf("%s\n", input);
	add_history(input);
	free(input);
	return (0);
}
