LIBFT_OBJECT_NAMES  :=      ft_isalpha.o      ft_isdigit.o      ft_isalnum.o
TESTER_OBJECT_NAMES := test_ft_isalpha.o test_ft_isdigit.o test_ft_isalnum.o

NAME := libft.a

HEADERS :=

C_FLAGS ?= -Wall -Wextra -Werror -fsanitize=address

LINKER_FLAGS ?= -fsanitize=address