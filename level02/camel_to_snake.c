/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toroman <toroman@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:35:54 by toroman           #+#    #+#             */
/*   Updated: 2025/02/12 10:44:09 by toroman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	camel_to_snake(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			write(1, "_", 1);
			str[i] += 32;
			write(1, &str[i], 1);

		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		camel_to_snake(av[1]);
	}
}
