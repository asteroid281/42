/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunozdem <yunozdem@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:33:58 by yunozdem          #+#    #+#             */
/*   Updated: 2023/09/11 18:02:18 by yunozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b; 
		*mod = a % b;
	}
}


int main()
{
	int a,b;

	a = 20;
	b = 10;

	int div,mod;

	ft_div_mod(a,b,&div,&mod);

	printf("%d,%d,%d,%d",a,b,div,mod);

	return(0);
}