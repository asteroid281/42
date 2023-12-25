/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunozdem <yunozdem@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 20:16:40 by yunozdem          #+#    #+#             */
/*   Updated: 2023/09/21 16:48:40 by yunozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	unsigned int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		result *= nb * ft_recursive_factorial(nb - 1);
	}
	return (result);
}
