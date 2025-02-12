/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toroman <toroman@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:47:11 by toroman           #+#    #+#             */
/*   Updated: 2025/02/12 11:01:21 by toroman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		int i;
		int nbr1;
		int nbr2;
		int res;

		i = 0;
		nbr1 = atoi(&av[1][0]);
		nbr2 = atoi(&av[3][0]);

		while(av[i])
		{
			if (av[2][0] == '*')
				res = nbr1 * nbr2;
			else if (av[2][0] == '/')
				res = nbr1 / nbr2;
			else if (av[2][0] == '+')
				res = nbr1 + nbr2;
			else if (av[2][0] == '-')
				res = nbr1 - nbr2;
			else if (av[2][0] == '%')
				res = nbr1 % nbr2;
			i++;

		}
		printf("%d\n", res);
	}
}
