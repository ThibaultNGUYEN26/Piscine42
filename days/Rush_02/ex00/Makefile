# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/30 10:36:26 by thibnguy          #+#    #+#              #
#    Updated: 2022/08/02 14:25:39 by thibnguy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJFILES = ./src/main.o \
		   ./src/ft_putchar.o \
		   ./src/ft_putstr.o \
		   ./src/ft_strlen.o \
		   ./src/ft_strcmp.o \
		   ./src/ft_atoi.o \
		   ./src/ft_write_digit.o \
		   ./src/ft_itoa.o \
		   ./src/ft_strrev.o \
		   ./src/ft_write_all_digits.o \
		   ./src/ft_write_2digits.o \
		   ./src/ft_write_3digits.o \
		   ./src/ft_specials.o \
		   ./src/ft_strcpy.o \
TARGET = rush-02

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES)

fclean:
	rm -f $(OBJFILES) $(TARGET) *~
