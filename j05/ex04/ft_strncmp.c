/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 16:31:54 by jlange            #+#    #+#             */
/*   Updated: 2015/10/24 16:31:59 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr();

int		ft_strncmp(char *s1, char *s2, unsigned char n)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i != n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
