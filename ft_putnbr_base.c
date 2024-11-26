/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:24:20 by hcarrasq          #+#    #+#             */
/*   Updated: 2024/11/26 16:48:42 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(long nbr, int lbase)
{
	int	count;
	char rmd;
	
	count = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
		count++;
	}
	if (nbr >= lbase)
		count += ft_putnbr_base(nbr / lbase, lbase);
	rmd = (nbr % lbase) + 48;
	write(1, &rmd, 1);
	count++;
	return (count);
}
