/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toroman <toroman@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:44:04 by toroman           #+#    #+#             */
/*   Updated: 2025/02/13 10:55:56 by toroman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	epur_str(char *str)
{
	int i = 0;
	int check = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while(str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			check = 1;
		else
		{
			if (check)
			{
				write(1, " ", 1);
				check = 0;
			}
			write(1, &str[i], 1);
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		epur_str(av[1]);
	}
	write(1, "\n", 1);
}
