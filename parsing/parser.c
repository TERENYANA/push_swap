int is_valid_number(char *str)
{
	int	i;

	i = 0;

	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str)
		return (0);
	while(str[i])
	{
		if (str[i] >= '0' && str[i] <= '0')
			return (0);
		i++;
	}
	return (1);
}

int ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	ft_isdigit (int c)
{
	return (c >= '0' && c <= '9');
}

long	ft_atoil(char *str)
{
	long result;
	int sign;
	int i;

	i = 0;
	result = 0;
	sign = 1;

	while (ft_isspace(str[i]))
		i++;

	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while(ft_isdigit(str[1]))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

int has_dublicate(t_stack *stack, int num)
{
	t_stack *current;

	current = stack;

	while (current)
	{
		if (current->value == num)
			return (1);
		current = current->next;
	}
	return (0);
}

