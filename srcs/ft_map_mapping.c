
int ft_map_mapping(char *lib, char *map)
{
	int i;
	int dot;

	i = 0;
	dot = 0;
	while (map[i++])
	{
		if (map[i] == '.')
		{
			dot++;
			if (map[i] == '.' && map[i + 1] == '\n')
				return (dot);
		}
		dot = 0;
	}
	return (0);
}
