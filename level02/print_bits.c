/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tony <tony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 19:16:41 by tony              #+#    #+#             */
/*   Updated: 2025/02/12 19:20:54 by tony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_bits(unsigned char octet)
{
    int index;
    unsigned char bit;

    index = 8;
    while (index--)
    {
        bit = ((octet >> index) & 1) + '0';
        write(1, &bit, 1);
    }
}
