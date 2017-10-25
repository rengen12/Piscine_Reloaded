/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 19:11:04 by amichak           #+#    #+#             */
/*   Updated: 2017/10/24 19:31:54 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *s)
{
	while (*s)
		ft_putchar(*s++);
	ft_putchar('\n');
}

int		cmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		main(int ac, char **av)
{
	int		i;
	char	*t;
	int		f;

	i = 0;
	f = 1;
	while (f && ac > 1)
	{
		f = 0;
		i = 0;
		while (++i < ac - 1)
			if (cmp(av[i], av[i + 1]) > 0)
			{
				t = av[i];
				av[i] = av[i + 1];
				av[i + 1] = t;
				f = 1;
			}
	}
	i = 1;
	while (i < ac && ac > 1)
		ft_putstr(av[i++]);
	return (0);
}
