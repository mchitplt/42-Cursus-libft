/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:43:38 by mupolat           #+#    #+#             */
/*   Updated: 2022/12/13 13:48:45 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include    "libft.h"

void    ft_bzero(void   *src, size_t n)
{
    ft_memset(src, '\0', n);  
}

/*int main()
{
    char a[] = "mucahit";
    ft_bzero(a, 7);
    printf("%s", a);
}*/