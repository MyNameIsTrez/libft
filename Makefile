NAME := libft.a

CC := gcc

OBJ_DIR := obj

C_FLAGS ?= -Wall -Wextra

HEADERS := libft.h

LINKER_FLAGS ?= # -fsanitize=address -g


PART_1_UNSORTED :=	\
	isalpha.c		\
	isdigit.c		\
	isalnum.c		\
	isascii.c		\
	isprint.c		\
	strlen.c		\
	memset.c		\
	bzero.c			\
	memcpy.c		\
	memmove.c		\
	strlcpy.c		\
	strlcat.c		\
	toupper.c		\
	tolower.c		\
	strchr.c		\
	strrchr.c		\
	strncmp.c		\
	memchr.c		\
	memcmp.c		\
	strnstr.c		\
	atoi.c			\
	calloc.c		\
	strdup.c


PART_2_UNSORTED :=	\
	substr.c		\
	strtrim.c		\
	putchar_fd.c	\
	strjoin.c		\
	putstr_fd.c		\
	putendl_fd.c	\
	itoa.c			\
	putnbr_fd.c		\
	striteri.c		\
	strmapi.c		\
	split.c			\


PART_2_BONUS :=		\
	lstnew.c		\
	lstdelone.c		\
	lstclear.c		\
	lstsize.c		\
	lstlast.c		\
	lstadd_back.c	\
	lstadd_front.c	\
	lstiter.c		\
	lstmap.c


SOURCES := $(PART_1_UNSORTED) $(PART_2_UNSORTED)

ifdef BONUS
SOURCES += $(PART_2_BONUS)
endif

OBJECT_PATHS := $(addprefix $(OBJ_DIR)/ft_,$(SOURCES:.c=.o))

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
	@echo "$(MAKE_DATA)" > $(DATA_FILE)

$(OBJ_DIR)/%.o: %.c $(HEADERS)
	@mkdir -p $(@D)
	$(CC) $(C_FLAGS) $(INCLUDES) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)/

fclean: clean
	@rm -f $(NAME)

re: fclean all

bonus:
	@$(MAKE) BONUS=1 all

.PHONY: all clean fclean re bonus
