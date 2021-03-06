/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_of_a_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agottlie <agottlie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/05 17:15:01 by agottlie          #+#    #+#             */
/*   Updated: 2019/01/06 08:15:47 by agottlie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sum_of_a_num(int num)
{
	if (num <= 9)
		return (num);
	else
		return (num % 10 + ft_sum_of_a_num(num / 10));
}

int		main()
{
	printf("sum = %d\n", ft_sum_of_a_num(55));
	return 0;
}

// Сумма цифр числа
// Дано натуральное число N. Вычислите сумму его цифр.
// При решении этой задачи нельзя использовать строки, списки, массивы (ну и циклы, разумеется).