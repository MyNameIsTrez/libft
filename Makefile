NAME := libft.a

CC := gcc

OBJ_DIR := obj

CFLAGS ?= -Wall -Wextra -Werror

HEADERS := libft.h


PART_1_SOURCES :=	\
	ft_isalpha.c	\
	ft_isdigit.c	\
	ft_isalnum.c	\
	ft_isascii.c	\
	ft_isprint.c	\
	ft_strlen.c		\
	ft_memset.c		\
	ft_bzero.c		\
	ft_memcpy.c		\
	ft_memmove.c	\
	ft_strlcpy.c	\
	ft_strlcat.c	\
	ft_toupper.c	\
	ft_tolower.c	\
	ft_strchr.c		\
	ft_strrchr.c	\
	ft_strncmp.c	\
	ft_memchr.c		\
	ft_memcmp.c		\
	ft_strnstr.c	\
	ft_atoi.c		\
	ft_calloc.c		\
	ft_strdup.c


PART_2_SOURCES :=	\
	ft_substr.c		\
	ft_strtrim.c	\
	ft_putchar_fd.c	\
	ft_strjoin.c	\
	ft_putstr_fd.c	\
	ft_putendl_fd.c	\
	ft_itoa.c		\
	ft_putnbr_fd.c	\
	ft_striteri.c	\
	ft_strmapi.c	\
	ft_split.c		\


BONUS_SOURCES :=		\
	ft_lstnew.c			\
	ft_lstdelone.c		\
	ft_lstclear.c		\
	ft_lstsize.c		\
	ft_lstlast.c		\
	ft_lstadd_back.c	\
	ft_lstadd_front.c	\
	ft_lstiter.c		\
	ft_lstmap.c


INCLUDES := $(addprefix -I ,$(dir $(HEADERS)))


SOURCES := $(PART_1_SOURCES) $(PART_2_SOURCES)

ifdef ADD_BONUS
SOURCES += $(BONUS_SOURCES)
endif

OBJECT_PATHS := $(addprefix $(OBJ_DIR)/,$(SOURCES:.c=.o))


FCLEANED_FILES := ${NAME}


ifdef DEBUG
HEADERS += tests.h
CFLAGS += -g -Wconversion -I$(HOME)/.brew/Cellar/criterion/2.3.3/include
# CFLAGS += -fsanitize=address
FCLEANED_FILES += tester
endif

# Only cleans when MAKE_DATA changes.
DATA_FILE := .make_data
MAKE_DATA = $(CFLAGS) $(SOURCES)
PRE_RULES =
ifneq ($(shell echo "$(MAKE_DATA)"), $(shell cat "$(DATA_FILE)" 2> /dev/null))
PRE_RULES += clean
endif


all: $(PRE_RULES) $(NAME)

$(NAME): $(OBJECT_PATHS)
	ar rcs $(NAME) $(OBJECT_PATHS)
	echo "$(MAKE_DATA)" > $(DATA_FILE)

$(OBJ_DIR)/%.o: %.c $(HEADERS)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)/

fclean: clean
	rm -f ${FCLEANED_FILES}

re: fclean all

bonus:
	@$(MAKE) ADD_BONUS=1 all

.PHONY: all clean fclean re bonus
