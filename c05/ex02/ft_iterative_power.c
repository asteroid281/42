/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunozdem <yunozdem@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:49:31 by yunozdem          #+#    #+#             */
/*   Updated: 2023/09/20 17:30:06 by yunozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	while (power - 1 > 0)
	{
		result = result * nb;
		power--;
	}
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (result);
}
