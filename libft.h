/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <mansargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:36:01 by mansargs          #+#    #+#             */
/*   Updated: 2025/01/13 21:44:08 by mansargs         ###   ########.fr       */
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

int					ft_isalpha(char *);
int					ft_isdigit(char *);
int					ft_isalnum(char *);
int					ft_isalnum(char *);
int					ft_isprint(char *);
size_t				ft_strlen(const char *);
int					ft_toupper(int);
int					ft_tolower(int);
char				*ft_strchr(const char *, int);
char	*ft_strrchr(const char *, int)

#endif