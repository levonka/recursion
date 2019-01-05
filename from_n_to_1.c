/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   from_n_to_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agottlie <agottlie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 14:53:56 by agottlie          #+#    #+#             */
/*   Updated: 2018/12/26 16:57:10 by agottlie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// first solution
/*void	ft_somewhat(int n)
{
	printf("%d\n", n);
	if (n == 1)
		return ;
	ft_somewhat(n - 1);
}*/

// second solution
void	ft_somewhat(int n)
{
	printf("%d\n", n);
	if (n == 1)
		return ;
	else
		ft_somewhat(n - 1);
	return ;
}

int		main()
{
	ft_somewhat(10);
	return 0;
}

// От n до 1
// Дано натуральное число n. Выведите все числа от n до 1.