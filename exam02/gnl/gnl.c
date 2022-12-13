/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:26:34 by abarrier          #+#    #+#             */
/*   Updated: 2022/02/18 14:58:37 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	gnl_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
		{
			i++;
			return (i);
		}
		i++;
	}
	return (i);
}

char	*gnl_strchr(char *s, int c)
{
	int	i;
	
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}

void	gnl_strncpy(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while (s2[i] && s2[i] != '\n' && n > 0)
	{
		s1[i] = s2[i];
		i++;
		n--;
	}
	if (s2[i] == '\n')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
}

char	*gnl_strjoin(char *s1, char *s2)
{
	char	*str;
	size_t	lens1;
	size_t	lens2;

	if (!s1)
	{
		s1 = (char *)malloc(sizeof(char));
		if (!s1)
			return (0);
		s1[0] = '\0';
	}
	lens1 = gnl_strlen(s1);
	lens2 = gnl_strlen(s2);
	str = (char *)malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (!str)
	{
		free (s1);
		return (0);
	}
	ft_strncpy(str, s1, lens1);
	ft_strncpy(&str[lens1], s2, lens2);
	str[lens1 + lens2] = '\0';
	free(s1);
	s1 = 0;
	return (str);
}

void	gnl_shift_buf(char *buf)
{
	char	*bufchar;
	size_t	lenbuf;

	bufchar = gnl_strchr(buf, '\n');
	lenbuf = gnl_strlen(buf);
	if (bufchar == 0)
	{
		buf[0] = '\0';
	}
	else
	{
		gnl_strncpy(buf, bufchar, lenbuf);
	}
}

char	*gnl_line(int fd, char *buf)
{
	char	*line;
	ssize_t	letters;

	line = gnl_strjoin(line, buf);
	if (!line = 0)
		return (0);
	letters = 0;
	while (gnl_strchr(buf, '\n'))
	{
		letters = read(fd, buf, BUFFER_SIZE);
		if (letters <= 0)
		{
			free(line);
			return (0);
		}
		buf[letters] = '\0';
		line = gnl_strjoin(line, buf);
		if (!line)
			return (0);
	}
	return (line);
}

char	*gnl(int fd)
{
	static char	*buf;
	char	*line;

	line = 0;
	if (fd <= 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE >= INT_MAX)
		return (line);
	if (!buf)
	{
		buf = (char *)malloc(sizeof(char) * (BUFFERSIZE + 1));
		if (!buf)
			return (0);
		buf [0] = '\0';
	}
	line = gnl_line(fd, buf);
	if (!line || line[0] == '\0')
	{
		if (line)
			free(line);
		line = 0;
		free(buf);
		buf = 0;
	}
	else
		gnl_shift_buf(buf);
	return (line);
}
