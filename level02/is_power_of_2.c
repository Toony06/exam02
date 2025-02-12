/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toroman <toroman@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 16:45:04 by toroman           #+#    #+#             */
/*   Updated: 2025/02/12 16:46:37 by toroman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int is_power_of_2(unsigned int number)
{
	if (number == 0)
		return (0);
	
	while (number % 2 == 0) 
		number = number / 2;

	if (number == 1)
		return (1);
	else
		return (0);
}
