/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunozdem <yunozdem@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:45:26 by yunozdem          #+#    #+#             */
/*   Updated: 2023/09/16 19:02:47 by yunozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
#include <stdio.h>
int main()
{
	ft_rev_int_tab(tab,size);

	int tab[5] = {2,2,3,4,5};

	int i; 
	while(tab[i] < 5)
	{
		printf("%d",tab[i]);
		i++;
	}
	
}