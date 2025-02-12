/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toroman <toroman@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 14:35:19 by toroman           #+#    #+#             */
/*   Updated: 2025/02/12 14:45:01 by toroman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	putnbr(int nb)
{
	if (nb >= 10)
	{
		putnbr(nb / 10);
		putnbr(nb % 10);
	}
	if (nb <= 9)
	{
		putchar(nb + '0');
	}
}

void	fizzbuzz()
{
	int nb;

	nb = 1;
	while (nb <= 100)
	{
		if (nb % 5 == 0 && nb % 3 == 0)
			write(1, "fizzbuzz", 8);
		else if (nb % 3 == 0)
			write(1, "fizz", 4);
		else if (nb % 5 == 0)
			write(1, "buzz", 4);
		else
			putnbr(nb);
		nb++;
		write(1, "\n", 1);
	}
}

int main()
{
	fizzbuzz();
}
