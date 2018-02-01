/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 10:26:43 by gkabongo          #+#    #+#             */
/*   Updated: 2017/11/27 10:26:45 by gkabongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/filler.h"

void	get_piece(t_piece *piece)
{
	char	*line;
	char	*piece_join;
	int		i;
	int		line_nbr;

	i = 0;
	piece_join = "\0";
	line_nbr = 0;
	get_next_line(0, &line);
	while (ft_isdigit(line[i]) == 0)
		i++;
	piece->column = ft_atoi(&line[i]);
	while (ft_isdigit(line[i]) == 1)
		i++;
	i++;
	piece->row = ft_atoi(&line[i]);
	while (get_next_line(0, &line) > 0)
	{
		piece_join = ft_strjoin(piece_join, line);
		piece_join = ft_strjoin(piece_join, "\n");
		line_nbr++;
		if (line_nbr == piece->column)
			break ;
	}
	piece->piece = ft_strsplit(piece_join, '\n');
}

void	get_map(t_info *info, t_piece *piece)
{
	char	*line;
	char	*map_join;
	int		line_nbr;

	map_join = "\0";
	line_nbr = 0;
	while (get_next_line(0, &line) > 0)
	{
		if (ft_isdigit(line[0]) == 1)
		{
			map_join = ft_strjoin(map_join, &line[4]);
			map_join = ft_strjoin(map_join, "\n");
			line_nbr++;
		}
		if (line_nbr == info->map_column)
			break ;
	}
	info->map = ft_strsplit(map_join, '\n');
	get_piece(piece);
}
