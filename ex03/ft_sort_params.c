/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 21:23:46 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/17 18:41:02 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printstring(int argc, char **argv)

{
	int	i;
	int	c;

	i = 0;
	c = 1;
	while (c != argc)
	{
		i = 0;
		while (argv[c][i] != '\0')
		{
			write (1, &argv[c][i], 1);
			i++;
		}
		write (1, "\n", 1);
		c++;
	}
}

void	sort(int argc, char **argv, int i, int j)
{
	int		c;
	char	*temp;

	i = 1;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - 1)
		{
			c = 0;
			while (argv[j][c] != '\0' && argv[j + 1][c] != '\0'
			&& argv[j][c] == argv[j + 1][c])
			{
				c++;
			}
			if (argv[j][c] > argv[j + 1][c])
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)

{
	int		i;
	int		j;

	i = 0;
	j = 0;
	sort(argc, argv, i, j);
	printstring(argc, argv);
	return (0);
}
