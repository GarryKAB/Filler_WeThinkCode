/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 10:27:40 by gkabongo          #+#    #+#             */
/*   Updated: 2017/11/28 09:06:23 by gkabongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/filler.h"

static void		init(t_info *info, t_piece *piece)
{
	info->nbr = 0;
	info->count = 0;
	info->finish = 0;
	piece->column = 0;
	piece->row = 0;
}

int				main(void)
{
	t_info		info;
	t_piece		piece;

	init(&info, &piece);
	get_info(&info);
	while (1)
	{
		if (info.nbr == 1 || info.nbr == 2)
		{
			if (player(&info, &piece) == 0)
			{
				break ;
			}
		}
	}
}
