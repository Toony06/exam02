/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tony <tony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 19:15:05 by tony              #+#    #+#             */
/*   Updated: 2025/02/12 19:15:11 by tony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int	*tab, unsigned int len)
{
	unsigned int	index;
	int max_number;

	index = 0;
	max_number = 0;
	if (tab == 0)
		return (0);
	
	
	if (len > 0)
	{
		max_number = tab[index];
		while (index < len)
		{
			if (max_number < tab[index])
				max_number = tab[index];
			index++;
		}
	}
	return (max_number);
}
