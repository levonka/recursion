/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   palindrom.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agottlie <agottlie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 12:11:01 by agottlie          #+#    #+#             */
/*   Updated: 2019/01/06 12:41:30 by agottlie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_palindrom(char *str, int begin, int end)
{
	if (str[begin] == str[end])
	{
		if (begin == end || begin > end)
		{
			printf("YES\n");
			return ;
		}
		return (ft_palindrom(str, begin + 1, end - 1));
	}
	else if (begin < end)
		printf("NO\n");
}

int		main()
{
	char	*str;

	str = strdup("somethinggnihtemos");
	ft_palindrom(str, 0, strlen(str) - 1);
	return 0;
}

// Палиндром
// Дано слово, состоящее только из строчных латинских букв. Проверьте, является ли это слово палиндромом. Выведите YES или NO.
// При решении этой задачи нельзя пользоваться циклами, в решениях на питоне нельзя использовать срезы с шагом, отличным от 1.