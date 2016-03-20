#include "get_next_line.h"

int		main(int argc, char const *argv[])
{
	int		fd;
	int 	ret;
	char	*line = NULL;

	if (argc > 1)
		fd = open(argv[1], O_RDONLY);
	else
		fd = 0;
	while ((ret = get_next_line(fd, &line)) > 0)
	{
		ft_putendl(line);
		// free(line);
	}
	// printf("%s\n", line);
	return (0);
}
