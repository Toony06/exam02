/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toroman <toroman@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 14:46:03 by toroman           #+#    #+#             */
/*   Updated: 2025/02/12 14:51:23 by toroman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	first_word(char *str)
{
	int i;

	i = 0;

	while (str[i] == ' ')
		i++;
	while (str[i] != ' ')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
int main(int ac, char **av)
{
	if (ac == 2)
	{
		first_word(av[1]);
	}
}
