/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunozdem <yunozdem@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:37:14 by yunozdem          #+#    #+#             */
/*   Updated: 2023/09/11 18:04:42 by yunozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	//int	div;
	//int	mod;

	*a = *a / *b;
	*b = *a % *b;
	//*a = div;
	//*b = mod;
}

int main()
{
	int a = 50;
	int b = 25;

	ft_ultimate_div_mod(&a,&b);

	printf("%d,%d",a,b);

	return(0);
}
