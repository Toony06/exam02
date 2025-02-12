/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toroman <toroman@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:27:54 by toroman           #+#    #+#             */
/*   Updated: 2025/02/12 12:34:08 by toroman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
void wdmatch(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(s2[j] && s1[i])
	{
		if (s2[j] == s1[i])
			i++;
		j++;
	}
	if (i == ft_strlen(s1))
		ft_putstr(s1);
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		wdmatch(av[1], av[2]);
	}
	write(1, "\n", 1);
}
