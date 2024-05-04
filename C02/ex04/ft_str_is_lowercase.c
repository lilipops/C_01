/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngurskiy <ngurskiy@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 09:52:12 by ngurskiy          #+#    #+#             */
/*   Updated: 2023/11/11 20:07:42 by ngurskiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
		{
			c = 0;
		}
		i++;
	}
	return (c);
}

/*int main(void) {
	char str[] = "Holamellamonikita";
	printf("%d", ft_str_is_lowercase(str));
	return (0);
}*/		
