/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   factorization.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agottlie <agottlie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 09:55:16 by agottlie          #+#    #+#             */
/*   Updated: 2019/01/06 10:58:19 by agottlie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_factorization(int num, int divisor)
{
	if (num < 1)
		return ;
	else if (divisor > num / 2)
	{
		printf("%d ", num);
		return ;
	}
	if (num % divisor == 0)
	{
		printf("%d ", divisor);
		return (ft_factorization(num / divisor, divisor));
	}
	else
		return (ft_factorization(num, divisor + 1));
}

int		main()
{
	int		i;

	i = 0;
	while (i < 50)
	{
		ft_factorization(i, 2);
		printf("\tnum = %d\n", i);
		++i;
	}
	return 0;
}

// Разложение на множители
// Дано натуральное число n>1. Выведите все простые множители этого числа в порядке неубывания с учетом кратности.
// Алгоритм должен иметь сложность O(logn).