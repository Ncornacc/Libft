/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                     :+:    :+:           */
/*                                                     +:+                    */
/*   By: ncornacc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 15:46:12 by ncornacc      #+#    #+#                 */
/*   Updated: 2023/01/17 15:56:01 by ncornacc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>

# if BUFFER_SIZE > 2147483647
#  undef BUFFER_SIZE 
# endif

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char *s1, char const *s2);
size_t	ft_strlen(const char *s);
void	*ft_calloc(size_t nmemb, size_t size);

#endif
