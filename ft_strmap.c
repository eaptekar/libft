/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaptekar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 21:24:19 by eaptekar          #+#    #+#             */
/*   Updated: 2017/11/18 21:57:19 by eaptekar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*out;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	out = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!out)
		return (NULL);
	while (s[i])
	{
		out[i] = f(s[i]);
		i++;
	}
	out[i] = '\0';
	return (out);
}
