/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toroman <toroman@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:04:55 by toroman           #+#    #+#             */
/*   Updated: 2025/02/12 15:13:29 by toroman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while(str[i]) 
		i++; 
	return(i);
}

void	last_word(char *str)
{
	int i = ft_strlen(str) - 1;
	while(str[i] == ' ')
		i--;
	while(str[i] != ' ')
		i--;
	i++;
	while(str[i] != ' ')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		last_word(av[1]);
	write(1, "\n", 1);
}
