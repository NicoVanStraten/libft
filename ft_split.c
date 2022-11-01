/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicolaas <nicolaas@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 10:55:41 by nicolaas      #+#    #+#                 */
/*   Updated: 2022/11/01 11:47:40 by nicolaas      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_substrlen(char const *s, char delimiter)
{
    size_t substrlen;

    substrlen = 0;
    while (s[substrlen] != '\0' && s[substrlen] != delimiter)
        substrlen++;
    return (substrlen);
}

static size_t ft_strcounter(char const *mainstr, char delimiter)
{
    size_t strcount;
    size_t i;

    strcount = 0;
    i = 0;
    while (i < ft_strlen(mainstr))
    {
        if (mainstr[i] != delimiter)
        {
            i = i + ft_substrlen(&mainstr[i], delimiter);
            strcount++;
        }
        i++;
    }
    return (strcount + 1);
}

static size_t ft_free_split_str(char **splitstr, ssize_t array1)
{
    if (splitstr[array1] != 0)
    {
        while (array1 >= 0)
        {
            free (splitstr[array1]);
            array1++;
        }
        free (splitstr);
        return (0);
    }
    return (1);
}

char **ft_split(char const *s, char c)
{
    ssize_t array1;
    char **splitstr;

    array1 = 0;
    if (s == 0)
        return (0);
    splitstr = (char *)malloc(sizeof(char *) * ft_strcounter(s, c));
    if (splitstr == NULL)
        return (NULL);
    while (*s != '\0')
    {
        if (*s != c)
        {
            splitstr[array1] = ft_substr((char *)s, 0, ft_substrlen(s, c));
            if (!(ft_free_split_str(splitstr, array1)))
                return (NULL);
            s = s + ft_substrlen(s, c);
            array1++;
        }
        else
            s++;
    }
    splitstr[array1] = NULL;
    return (splitstr);
}