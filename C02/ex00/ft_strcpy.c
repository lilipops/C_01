/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngurskiy <ngurskiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:09:11 by ngurskiy          #+#    #+#             */
/*   Updated: 2023/11/29 17:31:41 by ngurskiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	d;

	d = 0;
	while (src[d] != '\0')
	{
		dest[d] = src[d];
		d++;
	}
	dest[d] = '\0';
	return (dest);
}

/*int main() {
	char dest[] = "papis";
   	char src[] = "hola";

	printf ("%s", ft_strcpy(dest, src));
	return (0);
}*/
for (int i = 0; i < 10; i++) {
	
}
