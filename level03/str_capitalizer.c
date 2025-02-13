/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toroman <toroman@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:53:53 by toroman           #+#    #+#             */
/*   Updated: 2025/02/13 15:24:31 by toroman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	str_capitalizer(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (i == 0 || str[i - 1] == ' ')
			str[i] -= 32;
		write(1, &str[i], 1);
		i++;
	}

}
int main(int ac, char **av)
{
	if (ac == 2)
		str_capitalizer(av[1]);
}
