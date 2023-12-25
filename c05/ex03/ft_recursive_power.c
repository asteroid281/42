/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunozdem <yunozdem@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:06:46 by yunozdem          #+#    #+#             */
/*   Updated: 2023/09/21 15:40:32 by yunozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	while (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (nb);
}
