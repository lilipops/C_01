/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngurskiy <ngurskiy@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:30:42 by ngurskiy          #+#    #+#             */
/*   Updated: 2023/11/11 23:00:56 by ngurskiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				x;

	i = 0;
	x = 0;
	while (i < n)
	{
		if (src[i] != '\0' && !x)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
			x = 1;
		}
		i++;
	}
	return (dest);
}

/*int main(void) {
	char dest[] = "";
	char src[] = "Hola Mundo";

	printf("%s", ft_strncpy(dest, src, 8));
	return (0);har dest[] = "";
} */
