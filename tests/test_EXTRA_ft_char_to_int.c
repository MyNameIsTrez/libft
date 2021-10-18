void	test_EXTRA_ft_char_to_int(void)
{
	int	i = 0;

	while (i <= 9)
	{
		printf("%d\n", ft_char_to_int('0' + i));
		i++;
	}
}
