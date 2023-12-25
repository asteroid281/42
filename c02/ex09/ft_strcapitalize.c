/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunozdem <yunozdem@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:40:27 by yunozdem          #+#    #+#             */
/*   Updated: 2023/09/13 00:51:02 by yunozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	next;

	i = 0;
	next = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && next == 1)
			str[i] = str[i] - 32;
		if ((str[i] >= 'A' && str[i] <= 'Z') && next == 0)
			str[i] = str[i] + 32;
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
			next = 0;
		else
			next = 1;
		i++;
	}
	return (str);
}
