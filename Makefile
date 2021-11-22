# CLONE TESTERS
# git clone https://github.com/alelievr/libft-unit-test && git clone https://github.com/ska42/libft-war-machine && git clone https://github.com/Tripouille/libftTester.git

# RUN TESTERS

# Change LIBFTDIR = ../libft to LIBFTDIR = ../
# cd libft-unit-test && make f

# Remove _bonus from 9 files and in the Makefile
# cd libft-war-machine && sh grademe.sh && sh grademe.sh

# No path change necessary
# cd libftTester && make


NAME := libft.a

CC := cc

OBJ_DIR := obj

CFLAGS := -Wall -Wextra -Werror
#CFLAGS += -O1 # -O1 adds tail recursion detection, which I need, so we might as well turn the optimizing up to 11 with -O3

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


BONUS_SOURCES :=			\
	ft_lstnew_bonus.c		\
	ft_lstdelone_bonus.c	\
	ft_lstclear_bonus.c		\
	ft_lstsize_bonus.c		\
	ft_lstlast_bonus.c		\
	ft_lstadd_back_bonus.c	\
	ft_lstadd_front_bonus.c	\
	ft_lstiter_bonus.c		\
	ft_lstmap_bonus.c


INCLUDES := $(addprefix -I,$(dir $(HEADERS)))


SOURCES := $(PART_1_SOURCES) $(PART_2_SOURCES)

ifdef ADD_BONUS
SOURCES += $(BONUS_SOURCES)
endif

OBJECT_PATHS := $(addprefix $(OBJ_DIR)/,$(SOURCES:.c=.o))


FCLEANED_FILES := $(NAME)


ifdef DEBUG
HEADERS += tests.h
CFLAGS += -g3 -Wconversion -I$(HOME)/.brew/Cellar/criterion/2.3.3/include
# CFLAGS += -fsanitize=address
FCLEANED_FILES += tester
endif

ifdef CUSTOM_MAIN
CFLAGS += -DCUSTOM_MAIN=1
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
	@echo "$(MAKE_DATA)" > $(DATA_FILE)

$(OBJ_DIR)/%.o: %.c $(HEADERS)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)/

fclean: clean
	rm -f $(FCLEANED_FILES)

re: fclean all

bonus:
	@$(MAKE) ADD_BONUS=1 all


remove_bonus_suffix:
	mv ft_lstadd_back_bonus.c  ft_lstadd_back.c
	mv ft_lstadd_front_bonus.c ft_lstadd_front.c
	mv ft_lstclear_bonus.c     ft_lstclear.c
	mv ft_lstdelone_bonus.c    ft_lstdelone.c
	mv ft_lstiter_bonus.c      ft_lstiter.c
	mv ft_lstlast_bonus.c      ft_lstlast.c
	mv ft_lstmap_bonus.c       ft_lstmap.c
	mv ft_lstnew_bonus.c       ft_lstnew.c
	mv ft_lstsize_bonus.c      ft_lstsize.c

add_bonus_suffix:
	mv ft_lstadd_back.c  ft_lstadd_back_bonus.c
	mv ft_lstadd_front.c ft_lstadd_front_bonus.c
	mv ft_lstclear.c     ft_lstclear_bonus.c
	mv ft_lstdelone.c    ft_lstdelone_bonus.c
	mv ft_lstiter.c      ft_lstiter_bonus.c
	mv ft_lstlast.c      ft_lstlast_bonus.c
	mv ft_lstmap.c       ft_lstmap_bonus.c
	mv ft_lstnew.c       ft_lstnew_bonus.c
	mv ft_lstsize.c      ft_lstsize_bonus.c


.PHONY: all clean fclean re bonus remove_bonus_suffix add_bonus_suffix
