/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 00:54:58 by mupolat           #+#    #+#             */
/*   Updated: 2022/12/19 18:15:41 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

char    *ft_strrchr(const   char    *str, int   c)
{
    int i;

    i = ft_strlen(str);
    if ((unsigned   char)c == '\0')
        return ((char *)str + i);
    while (i >= 0)
    {
        if(*((char *)str + i) == (unsigned   char)c)
            return ((char *)str + i);
        i--;
    }
    return (0);
}
/*
int main(void)
{
    char    cumle[] = "mucahit polat 2001";
    printf("%s", ft_strrchr(cumle,'p'));
}*/