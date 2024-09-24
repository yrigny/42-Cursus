CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC_DIR_LIB = src/
OBJ_DIR_LIB = obj/

SRC = ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_isspace \
	ft_strlen ft_memset ft_bzero ft_memcpy ft_memmove ft_strlcpy ft_strlcat \
	ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_memchr ft_memcmp \
	ft_strnstr ft_atoi ft_calloc ft_strdup ft_substr ft_strjoin ft_strtrim \
	ft_split ft_itoa ft_strmapi ft_striteri ft_putchar_fd ft_putstr_fd \
	ft_putendl_fd ft_putnbr_fd ft_lstnew ft_lstadd_front ft_lstsize \
	ft_lstlast ft_lstadd_back ft_lstdelone ft_lstclear ft_lstiter ft_lstmap \
	ft_printf fprinter_1 fprinter_2 \
	get_next_line get_next_line_utils

CFILES = $(addprefix $(SRC_DIR_LIB), $(addsuffix .c, $(SRC)))
OFILES = $(addprefix $(OBJ_DIR_LIB), $(addsuffix .o, $(SRC)))

GREEN=\033[0;32m
YELLOW=\033[0;33m
BLUE=\033[0;34m
MAGENTA=\033[0;35m
NONE=\033[0m

$(NAME): $(OFILES)
	@ar rcs $(NAME) $(OFILES)
	@echo "$(GREEN)Compiled ✓ $(NAME)$(NONE)"

all: $(NAME)

$(OBJ_DIR_LIB)%.o: $(SRC_DIR_LIB)%.c libft.h
	@mkdir -p $(OBJ_DIR_LIB)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
#	rm -f $(OFILES)
	@rm -rf $(OBJ_DIR_LIB)
	@echo "$(MAGENTA)Cleaned object files ✓ $(NONE)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(MAGENTA)Cleaned $(NAME) ✓ $(NONE)"

re: fclean all

.PHONY: all clean fclean re
