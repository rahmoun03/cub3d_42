/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 12:53:29 by arahmoun          #+#    #+#             */
/*   Updated: 2023/08/01 13:35:48 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB_H
# define CUB_H

# include "mlx.h"
#include "./get_next_line/get_next_line.h"

# define RED "\033[7m\033[31m"
# define DEFFAULT "\033[0m"
# define GREEN "\033[7m\033[32m"
# define YOLLOW "\033[7m\033[33m"

// data structer

typedef struct s_game
{
	int		start;
	int		xlpayer;
	int		ylpayer;
	int		x;
	int		y;
	void	*img;
	void	*win;
	void	*mlx;
	void	*xpm;
	int		hight;
	int		chight;
	int		width;
	int		cwidth;
	char	**map;
}			t_game;

typedef struct s_map
{
	int		j;
	int		a;
	int		i;
	char	*no;
	char	*so;
	char	*we;
	char	*ea;
	char	*map;
	char	**maps;
	char	*dst;
}			t_map;

// functions

void    read_file(t_map *map, int fd);
char	**ft_split(char const *s, char c);
void	check_element(t_map *map);

# endif