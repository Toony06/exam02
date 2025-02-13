/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toroman <toroman@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:18:28 by toroman           #+#    #+#             */
/*   Updated: 2025/02/13 10:40:31 by toroman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h> 

int main(int ac, char **av)
{
	int num1;
	int num2;

	if (ac == 3)
	{
		num1 = atoi(av[1]);
		num2 = atoi(av[2]);
		if (num1 > 0 && num2 > 0)
		{
			while(num1 != num2)
			{
				if (num1 > num2)
					num1 = num1 - num2;
				else
					num2 = num2 - num1;
			}
			printf("%d", num1);
		}
	}
	printf("\n");
	return (0);
}
