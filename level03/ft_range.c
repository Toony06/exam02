/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toroman <toroman@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:14:35 by toroman           #+#    #+#             */
/*   Updated: 2025/02/13 16:17:52 by toroman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int len = end - start;
	int i = 0;
	while(len <= end)
		len++;
	int *array = malloc(sizeof(int) * len);
	while(start <= end)
		array[i++] = start++;
	return (array);
}
