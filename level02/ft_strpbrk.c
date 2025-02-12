/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toroman <toroman@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 14:25:38 by toroman           #+#    #+#             */
/*   Updated: 2025/02/12 14:34:02 by toroman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	while(s1[i])
	{
		j  = 0;
		while(s2[j])
		{
			if (s2[j] == s1[i])
				return((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
int main (void)
{
	printf("%s\n", ft_strpbrk("Hola Mundo", "Heisu"));

	return (0);
}
