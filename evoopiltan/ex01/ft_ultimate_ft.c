/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunozdem <yunozdem@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 01:34:05 by yunozdem          #+#    #+#             */
/*   Updated: 2023/09/16 18:51:59 by yunozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int ***nbr)
{
	***nbr = 42;
}

#include <stdio.h>
int main()
{
	int a;
	
	int *p = &a;
	int **p2 = &p;


	ft_ultimate_ft(&p2);

	printf("%d",a);
}