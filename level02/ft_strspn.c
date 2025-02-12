/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toroman <toroman@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 16:26:39 by toroman           #+#    #+#             */
/*   Updated: 2025/02/12 16:43:39 by toroman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i;
	size_t j;
	size_t check;

	i = 0;
	while(s[i])
	{
		j = 0;
		check = 0;
		while(accept[j])
		{
			if (s[i] == accept[j])
				check = 1;
			j++;
		}
		if (check == 0)
			return(i);
		i++;
	}
	return (i);
}
#include <stdio.h>

int main(void)
{
    const char *string = "holaa";
    const char *accept = "holi";
    printf("Length of initial segment accepted: %zu\n", ft_strspn(string, accept));

    return 0;
}
