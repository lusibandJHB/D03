/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusiband <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 15:15:20 by lusiband          #+#    #+#             */
/*   Updated: 2020/07/12 16:03:40 by lusiband         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	*i;
	int	*j;

	*i = *a;
	*a = *i / *b;
	*j = *b;
	*b = *i / *j;
}	
 int main()
{
 	int *div;
	int *b;
	ft_div_mod(5, 5, div, b);
	return(0);
}

