void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	h;
	int	v;

	h = 0;
	v = 0;
	while (v < y)
	{
		while (h < x)
		{
			if ((v == 0 && h == 0) || (v == y - 1 && h == 0))
			{
				ft_putchar('A');
			}
			else if ((v == 0 && h == x - 1) || (v == y - 1 && h == x - 1))
			{
				ft_putchar('C');
			}
			else if (h == 0 || h == x - 1)
			{
				ft_putchar('B');
			}
			else if (v == 0 || v == y - 1)
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}
			h++;
		}
		h = 0;
		ft_putchar('\n');
		v++;
	}
}
