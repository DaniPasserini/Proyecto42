/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpasseri <dpasseri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:16:40 by dpasseri          #+#    #+#             */
/*   Updated: 2022/08/13 19:22:29 by dpasseri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_header(int w);
void	ft_body(int w);
void	ft_footer(int w);
void	rush(int x, int y);

void	rush(int x, int y)
{
	int	i;

	if (x > 0 && y > 0)
	{
		i = 1;
		ft_header(x);
		while (i < y - 1)
		{
			ft_body(x);
			i++;
		}
		if (y > 1)
		{
			ft_footer(x);
		}	
	}
}

void	ft_header(int w)
{
	int	i;

	ft_putchar('A');
	i = 1;
	while (i <= w - 2)
	{
		ft_putchar('B');
		i++;
	}
	if (w > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	ft_body(int w)
{
	int	i;

	ft_putchar('B');
	i = 1;
	while (i <= w - 2)
	{
		ft_putchar(' ');
		i++;
	}
	if (w > 1)
	{
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	ft_footer(int w)
{
	int	i;

	ft_putchar('A');
	i = 1;
	while (i <= w - 2)
	{
		ft_putchar('B');
		i++;
	}
	if (w > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}
