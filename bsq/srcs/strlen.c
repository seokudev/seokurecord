/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokklee <seokklee@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:30:43 by seokklee          #+#    #+#             */
/*   Updated: 2023/02/01 21:10:26 by seokklee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
