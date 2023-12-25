/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunozdem <yunozdem@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 01:34:05 by yunozdem          #+#    #+#             */
/*   Updated: 2023/09/11 17:07:50 by yunozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main()
{
	int a;

	int *p8 = &a;
	int **p7 = &p8;
	int ***p6 = &p7;
	int ****p5 = &p6;
	int *****p4 = &p5;
	int ******p3 = &p4;
	int *******p2 = &p3;
	int ********p1 = &p2;
	int *********p = &p1;

	ft_ultimate_ft(p);

	printf("%d",a);
}