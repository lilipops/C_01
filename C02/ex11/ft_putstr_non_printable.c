/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngurskiy <ngurskiy@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:08:29 by ngurskiy          #+#    #+#             */
/*   Updated: 2023/11/11 17:54:08 by ngurskiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	c;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			c = (unsigned char)str[i];
			write(1, "\\", 1);
			write(1, &"0123456789abcdef"[c / 16], 1);
			write(1, &"0123456789abcdef"[c % 16], 1);
		}
		else
		{
			write (1, &str[i], 1);
		}
		i++;
	}
}

/* int main() {
	char str[] = "Coucou\ntu v€as bien ?";
	ft_putstr_non_printable(str);
	return (0);
}*/
