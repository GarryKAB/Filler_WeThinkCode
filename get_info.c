/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_info.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 10:23:43 by gkabongo          #+#    #+#             */
/*   Updated: 2017/11/27 10:23:45 by gkabongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/filler.h"

void	get_num_player(t_info *info)
{
	char	*line;

	get_next_line(0, &line);
	info->nbr = ft_atoi(&line[10]);
}

void	get_letter(t_info *info)
{
	if (info->nbr == 1)
	{
		info->letter = 'O';
	}
	else
	{
		info->letter = 'X';
	}
}

void	get_h_and_w(t_info *info)
{
	char	*line;

	get_next_line(0, &line);
	info->map_column = ft_atoi(&line[8]);
	info->map_row = ft_atoi(&line[11]);
}

void	get_info(t_info *info)
{
	get_num_player(info);
	get_letter(info);
	get_h_and_w(info);
}
