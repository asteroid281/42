/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunozdem <yunozdem@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:20:58 by yunozdem          #+#    #+#             */
/*   Updated: 2023/09/21 13:49:20 by yunozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 2;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb >= 2)
	{
		while (i * i <= nb && i <= 46340)
		{
			if (i * i == nb)
				return (i);
			i++;
		}
	}
	return (0);
}
