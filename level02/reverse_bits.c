/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tony <tony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 19:23:10 by tony              #+#    #+#             */
/*   Updated: 2025/02/12 19:23:47 by tony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned char reverse_bits(unsigned char octet)
{
    int index;
    unsigned char result;

    result = 0;
    index = 8;
	{
        result = (result << 1) | (octet & 1);
        octet >>= 1;
    }
    return (result);
}
