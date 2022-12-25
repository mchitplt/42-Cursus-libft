/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:22:31 by mupolat           #+#    #+#             */
/*   Updated: 2022/12/24 20:29:15 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t n)
{
    size_t  i;

    i = 0;
    if(n > 0)
    {
        while (src[i] && i < n - 1)
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return((size_t)ft_strlen(src));
}
/*
int    main(void)
{
    char dst[] = "mucahtf8rfer";
    char src[] = "dddbbg";
    size_t size = 20;
    size_t sonuc;
    sonuc = ft_strlcpy(dst, src, size);
    printf("Değer: %zu", sonuc);
}*/