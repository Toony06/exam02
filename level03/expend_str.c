/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expend_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tony <tony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 22:25:43 by tony              #+#    #+#             */
/*   Updated: 2025/02/12 22:50:44 by tony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	expend_str(char *str)
{
	int i = 0;
	int check_space;
	while(str[i] == ' ' || str[i] == '\t')
		i++;
	check_space = 0;
	while(str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			check_space = 1;
		else
		{
			if (check_space)
			{
				write(1, "   ", 3);
				check_space = 0;
			}
			write(1, &str[i], 1);
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		expend_str(av[1]);
	write(1, "\n", 1);
	return (0);
}
