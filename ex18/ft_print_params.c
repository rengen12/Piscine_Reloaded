/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 19:04:48 by amichak           #+#    #+#             */
/*   Updated: 2017/10/24 19:10:17 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *s)
{
	while (*s)
		ft_putchar(*s++);
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	int		i;

	i = 1;
	if (ac > 1)
		while (i < ac)
			ft_putstr(av[i++]);
	return (0);
}
