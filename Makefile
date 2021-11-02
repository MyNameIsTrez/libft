NAME := libft.a

CC := gcc

OBJ_DIR := obj

C_FLAGS ?= -Wall -Wextra -Werror -Wconversion

HEADERS := libft.h

LINKER_FLAGS ?= # -fsanitize=address -g


PART_1_UNSORTED :=	\
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


PART_2_UNSORTED :=	\
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


PART_2_BONUS :=			\
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


SOURCES := $(PART_1_UNSORTED) $(PART_2_UNSORTED)

ifdef BONUS
SOURCES += $(PART_2_BONUS)
endif

OBJECT_PATHS := $(addprefix $(OBJ_DIR)/,$(SOURCES:.c=.o))


FCLEANED_FILES := ${NAME}


ifdef DEBUG
C_FLAGS += -g
LINKER_FLAGS += -g
FCLEANED_FILES += tester
endif

# Only cleans when MAKE_DATA changes.
DATA_FILE := .make_data
MAKE_DATA = $(C_FLAGS) $(LINKER_FLAGS) $(SOURCES)
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
	$(CC) $(C_FLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)/

fclean: clean
	rm -f ${FCLEANED_FILES}

re: fclean all

bonus:
	@$(MAKE) BONUS=1 all

.PHONY: all clean fclean re bonus
