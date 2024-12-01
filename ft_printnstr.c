/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henrique-reis <henrique-reis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 21:27:04 by henrique-re       #+#    #+#             */
/*   Updated: 2024/11/26 21:32:35 by henrique-re      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnstr(const char *str)
{
	int	count;

	if (!str)
		return("(null)");
	count = 0;
	while (*str)
	{
		write(1, &*str++, 1);
		count++;
	}
	return (count);
	
}
