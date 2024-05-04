/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngurskiy <ngurskiy@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:44:17 by ngurskiy          #+#    #+#             */
/*   Updated: 2023/11/11 21:45:50 by ngurskiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	c;

	c = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			c = 0;
		}
		i++;
	}
	return (c);
}

/*int main(void) {
	char str[] = "16238d7";
	printf("%d", ft_str_is_numeric(str));
	return (0);
}*/
