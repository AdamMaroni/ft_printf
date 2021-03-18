/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaroni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 14:30:26 by amaroni           #+#    #+#             */
/*   Updated: 2021/03/18 13:29:08 by amaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		handle_s(va_list args)
{
	char	*str;
	int		i;

	str = ft_strdup(va_arg(args, char*));
	i = ft_putstr_ret(str);
	return (i);
}