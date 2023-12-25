/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunozdem <yunozdem@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:30:09 by yunozdem          #+#    #+#             */
/*   Updated: 2023/09/16 18:26:32 by yunozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp[1];

	*(temp + 1) = *a;
	*a = *b;
	*b = *(temp + 1);
}
#include <stdio.h>
int main()
{
	int a = 5;
	int b = 10;

	ft_swap(&a,&b);

	printf("%d  %d",a,b);
	}