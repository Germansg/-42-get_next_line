/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/06 21:40:39 by dda-silv          #+#    #+#             */
/*   Updated: 2014/12/06 23:43:33 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"

int	read_from_fd_into_stock(int const fd, char *stock)
{
	static char	buff[BUFF_SIZE = { ENDL };
	int			read_bytes;

	read_bytes = read(fd, buff, BUFF_SIZE);
	if (read_bytes > 0)
	{
		// append to stock
	}
	return (read_bytes);
}

int get_next_line(int const fd, char ** line)
{
	static char	*stock = NULL;
	static char	*stock_end = NULL;
	char		*endl_index;
	char		*buff;

	// check if there's line in stock
	endl_index = ft_strchr(stock, ENDL);

	// if didn't find line, read BUFFER_SIZE bytes from fd until there's a line or EOF
	if (endl_index == NULL)
	{
	}

	// extract line from stock into new string, and put it in var `line`. correctly update stock_end.

	return (1);
}
