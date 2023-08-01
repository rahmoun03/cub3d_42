/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 12:53:22 by arahmoun          #+#    #+#             */
/*   Updated: 2023/08/01 13:37:34 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

int	check_path(char *str)
{
	int		i;
	int		j;
	char	*ber;

	j = 0;
	ber = ft_strdup(".ber");
	i = ft_strlen(str) - 4;
	while (str[i])
	{
		if (str[i] != ber[j])
		{
			free(ber);
			return (0);
		}
		i++;
		j++;
	}
	if (!str[i] && !ber[j])
	{
		free(ber);
		return (1);
	}
	free(ber);
	return (0);
}

int	main(int ac, char **av)
{
	int		fd;
	t_map	*ptr;
	t_game	*game;

	ptr = (t_map *)malloc(sizeof(t_map));
	game = (t_game *)malloc(sizeof(t_game));
	fd = open(av[1], O_RDWR);
	if (ac != 2 || fd == -1 || !check_path(av[1]))
	{
		printf(" %sinvalid path\n%s ", RED, DEFFAULT);
		return (0);
	}
    else
	{
        printf("%s valid \n%s" , GREEN, DEFFAULT);
		read_file(ptr, fd);
		check_element(ptr);
		printf("\n\n\n\n\n%s\n", ptr->no);
		printf("\n%s\n", ptr->so);
		printf("\n%s\n", ptr->we);
		printf("\n%s\n\n\n\n\n", ptr->ea);
	}
	system("leaks cub");
}

