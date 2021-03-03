int	get_next_line(int fd, char **line)
{
	char BUFFER_SIZE;
	int	i;

	BUFFER_SIZE = 1024;
	i = fd;
	if (!BUFFER_SIZE || BUFFER_SIZE > __INT_MAX__)
		return (-1);
	while(fd++)
		*line = read(fd);
	return (line);
}