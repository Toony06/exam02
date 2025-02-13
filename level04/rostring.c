/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toroman <toroman@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:10:42 by toroman           #+#    #+#             */
/*   Updated: 2025/02/13 16:10:46 by toroman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	firstword(char *str)
{
	int i = 0;
	while (str[i] == ' ')
		i++;
	while (str[i] != ' ')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void rostring(char *str)
{
	int i = 0;
	while(str[i] != ' ')
		i++;
	while(str[i] == ' ')
		i++;
	while(str[i])
	{
		if (str[i] != ' ')
		{
			write(1, &str[i], 1);
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
				write(1, " " , 1);
		}
		i++;
	}
	firstword(str);
}
int main(int ac, char **av)
{
	if (ac == 2)
	{
		rostring(av[1]);
	}
}
