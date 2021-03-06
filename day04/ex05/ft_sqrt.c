/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/13 11:14:21 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/14 22:15:38 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
	int i;

	i = 1;
	while (i * i != nb)
	{
		if (i / 2 > nb)
			break ;
		i++;
	}
	if (i * i == nb)
		return (i);
	return (0);
}
