/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manvel <manvel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:36:01 by mansargs          #+#    #+#             */
/*   Updated: 2025/01/14 21:08:54 by manvel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int			ft_isalpha(char *);
int					ft_isdigit(char *);
int					ft_isalnum(char *);
int					ft_isascii(char *);
int					ft_isprint(char *);
size_t				ft_strlen(const char * str);
int					ft_toupper(int);
int					ft_tolower(int);
char				*ft_strchr(const char *, int);
char				*ft_strrchr(const char *, int);
int					ft_strncmp(const char *, const char *, size_t);
size_t				ft_strlcpy(char *, const char *, size_t);
size_t				ft_strlcat(char *dst, const char *, size_t);
void				ft_bzero(void *, size_t );
void				*ft_memset(void *, int, size_t);
void				*ft_memcpy(void *, void const *, size_t);
void				*ft_memmove(void *, const void *, size_t);
int					ft_memcmp(const void *, const void *, size_t);
void				*ft_memchr(const void *, int, size_t);
int					ft_atoi(const char *);
char				*ft_strnstr(const char *, const char *, size_t);

#endif