/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:45:57 by mupolat           #+#    #+#             */
/*   Updated: 2022/12/13 15:31:04 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

void    *ft_memchr(const    void *ptr, int  c, size_t n)
{
    unsigned  char *a;

    a = (unsigned char *) ptr;
    while (n-- > 0)
    {
        if (*a == (unsigned char)c)
        {
            return (a);
        }
        a++;
    }
    return (0);
}

/*int main()
{
    char    a[] = "mucahit";
    printf("%s", ft_memchr(a,'c',4));
}*/