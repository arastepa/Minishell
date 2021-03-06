/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 13:56:55 by tmkrtchy          #+#    #+#             */
/*   Updated: 2021/01/21 13:57:14 by tmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(const char c)
{
	if (c == '\n' || c == '\t' || c == '\v'
		|| c == ' ' || c == '\r' || c == '\f')
		return (1);
	return (0);
}