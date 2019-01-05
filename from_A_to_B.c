/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   from_A_to_B.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agottlie <agottlie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 14:53:56 by agottlie          #+#    #+#             */
/*   Updated: 2018/12/24 11:46:38 by agottlie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// recursive solution
void	ft_somewhat(int A, int B)
{
	printf("%d\n", A);
	if (A == B)
		return ;
	else if (A > B)
		ft_somewhat(A - 1, B);
	else							// if (A < B)
		ft_somewhat(A + 1, B);
}

// iterative solution
/*void	ft_somewhat(int A, int B)
{
	while (A != B)
	{
		printf("%d\n", A);
		if (A > B)
			A = A - 1;
		else
			A = A + 1;
	}
	printf("%d\n", A);
}*/

int		main()
{
	ft_somewhat(15, 10);
	return 0;
}

// От A до B
// Даны два целых числа A и В (каждое в отдельной строке).
// Выведите все числа от A до B включительно, в порядке возрастания, если A < B, или в порядке убывания в противном случае.