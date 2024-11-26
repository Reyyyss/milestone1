/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:01:50 by hcarrasq          #+#    #+#             */
/*   Updated: 2024/11/26 13:35:46 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	va_start(args, str);
	count = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			count += ft_checkpercentage(str, args);
		}
		else
		{
			*str++;
			count++;
		}
	}
	
}

ft_checkpercentage(const char *str, va_list	args)
{
	int	count;

	if (*str == 'c')
		count =
	if (*str == 's')
		count =
	if (*str == 'p')
		count =
	if (*str == 'd')
		count =
	if (*str == 'i')
		count =
	if (*str == 'u')
		count =
	if (*str == 'x')
		count =
	if (*str == 'X') 
		count =
	if (*str == '%')
		count =
}