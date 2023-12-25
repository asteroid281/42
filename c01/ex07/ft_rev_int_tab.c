/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunozdem <yunozdem@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:45:26 by yunozdem          #+#    #+#             */
/*   Updated: 2023/09/11 17:39:00 by yunozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[size -1 - i];
		tab[size -1 - i] = swap;
		i++;
	}
}

int main()
{
	int a[5] = {1,2,3,4,5};
	int size = 5;

	ft_rev_int_tab(a,size);

	printf("%d,%d,%d,%d,%d",a[0],a[1],a[2],a[3],a[4]);

	return (0);
}