/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tony <tony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:18:03 by toroman           #+#    #+#             */
/*   Updated: 2025/02/12 19:02:08 by tony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_verif(char *str, char c, int index)
{
	int i;

	i = 0;
	while(i < index)
	{
		if (str[i] == c)
			return (0);
		i++;	
	}
	return(1);
}
void	ft_inter(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while(s1[i])
	{
		if (ft_verif(s1, s1[i], i) == 1)
		{
			j = 0;
			while(s2[j])
			{
				if (s1[i] == s2[j])
				{
					write(1, &s1[i], 1);
					break;
				}
				j++;
			}
		}
		i++;
	}
}


int	main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_inter(av[1], av[2]);
	}
}
