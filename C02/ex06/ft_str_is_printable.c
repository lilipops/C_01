/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngurskiy <ngurskiy@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:04:15 by ngurskiy          #+#    #+#             */
/*   Updated: 2023/11/11 19:46:33 by ngurskiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			c = 0;
		}
		i++;
	}
	return (c);
}

/*int main(void) {
	char str[] = "hola jaj me llamo pepe ^$%@#$%";
	printf("%d", ft_str_is_printable(str));
	return (0);
}*/
