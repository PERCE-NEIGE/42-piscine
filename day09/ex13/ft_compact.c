/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/17 07:43:14 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/17 15:52:20 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compact(char **tab, int lenght)
{
	int i;
	int j;
	char **tmp;

	i = 0;
	j = 0;
	tmp = 0;
	while (i < lenght)
	{
		if (tab[i] != 0) 
		{
			tmp[j] = tab[i];
			i++;
			j++;
		}
		i++;
	}
	tab = tmp;
	return (0);
}
