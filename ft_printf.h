/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcouto <jcouto@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 15:55:28 by jcouto            #+#    #+#             */
/*   Updated: 2024/08/23 18:03:49 by jcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdint.h>
# include <unistd.h>
# include <limits.h>

int				ft_printf(const char *fmt, ...);
int				ft_putchar(char c);
int				ft_putstr(char *str);
int				ft_putnbr(int nb);
unsigned int	ft_putunbr(unsigned int nb);
int				ft_pointer(unsigned long ptr);
int				ft_puthexu(unsigned int nb);
int				ft_puthexl(unsigned int nb);
int				ft_puthexptr(unsigned long nb);

#endif