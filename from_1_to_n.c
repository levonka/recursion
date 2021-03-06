/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   from_1_to_n.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agottlie <agottlie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 14:53:56 by agottlie          #+#    #+#             */
/*   Updated: 2019/01/06 08:58:11 by agottlie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// first solution
void	ft_from_1_to_n(int n)
{
	if (n != 1)
		ft_somewhat(n - 1);
	printf("%d\n", n);
	return ;
}

// second solution
/*void	ft_somewhat(int n)
{
	if (n == 1)
		printf("%d\n", n);
	else
	{
		ft_somewhat(n - 1);
		printf("%d\n", n);
	}
	return ;
}*/

int		main()
{
	ft_from_1_to_n(10);
	return 0;
}

// От 1 до n
// Дано натуральное число n. Выведите все числа от 1 до n.