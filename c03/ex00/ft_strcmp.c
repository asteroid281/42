/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunozdem <yunozdem@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 03:11:20 by yunozdem          #+#    #+#             */
/*   Updated: 2023/09/17 17:08:59 by yunozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char	*s1, char	*s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}
#include <stdio.h>
int main()
{
	char s1[] = "selamsadads";
	char s2[] = "naberssss";

	printf("%d",ft_strcmp(s1,s2));
}