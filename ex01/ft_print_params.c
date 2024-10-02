/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 21:11:37 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/15 11:14:35 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)

{
	int	i;
	int	a;

	i = 0;
	a = 1;
	while (a != argc)
	{
		i = 0;
		while (argv[a][i] != '\0')
		{
			write (1, &argv[a][i], 1);
			i++;
		}
		write (1, "\n", 1);
		a++;
	}
}
