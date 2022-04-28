/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <nprimo@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:24:43 by nprimo            #+#    #+#             */
/*   Updated: 2022/04/28 12:17:16 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSERS_H
# define PARSERS_H

# include <stdio.h>
# include <stdlib.h>
# include <readline/readline.h>
# include <readline/history.h>

# include "../libft/libft.h" 

# define PROMPT "$> "

# define METACHAR_SET "|&;()<>"
# define SPACE_SET " \n\t"

t_list	*get_token_list(char *input, t_list **token_list);

#endif