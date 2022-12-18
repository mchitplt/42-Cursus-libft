/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:46:23 by mupolat           #+#    #+#             */
/*   Updated: 2022/12/13 12:22:56 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_isascii(int str)
{
	return (str >= 0 && str <= 127);
}

/*int	main()
{
	printf("%d", ft_isascii(-3));
}*/