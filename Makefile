# CLONE TESTERS
# 1. git clone https://github.com/alelievr/libft-unit-test && git clone https://github.com/ska42/libft-war-machine && git clone https://github.com/Tripouille/libftTester.git


################################################################################################################################


# RUN TESTERS

## LIBFT-UNIT-TEST

# 2a. TODO: Open libft-unit-test/Makefile
# 2b. TODO: change LIBFTDIR = ../libft to LIBFTDIR = ../

# 3. cd libft-unit-test && make && ./run_test


## LIBFTTESTER

# 4. cd ../libftTester && make


## LIBFT-WAR-MACHINE

# 5. TODO: Manually remove _bonus from the filenames under BONUS_SOURCES in this file
# 6. cd .. && make remove_bonus_suffix && cd libft-war-machine && sh grademe.sh && sh grademe.sh


################################################################################################################################


NAME := libft.a

CC := cc

OBJ_DIR := obj

CFLAGS := -Wall -Wextra -Werror
#CFLAGS += -O1 # -O1 adds tail recursion detection, which I need, so we might as well turn the optimizing up to 11 with -O3

HEADERS := libft.h


################################################################################################################################


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


################################################################################################################################


INCLUDES := $(addprefix -I,$(dir $(HEADERS)))


SOURCES := $(PART_1_SOURCES) $(PART_2_SOURCES)

# ifdef ADD_BONUS
# SOURCES += $(BONUS_SOURCES)
# endif

OBJECT_PATHS := $(addprefix $(OBJ_DIR)/,$(SOURCES:.c=.o))
BONUS_OBJECT_PATHS := $(addprefix $(OBJ_DIR)/,$(BONUS_SOURCES:.c=.o))


FCLEANED_FILES := $(NAME)


# DEBUG is set to 1 when tester.mk includes this file
ifdef DEBUG
HEADERS += tests.h
CFLAGS += -g3 -Wconversion -I$(HOME)/.brew/Cellar/criterion/2.3.3/include
# CFLAGS += -fsanitize=address
FCLEANED_FILES += tester
endif

# Causes tester.c to run its own main(), instead of letting the unit tester Criterion use its own main()
# This is necessary as Criterion doesn't run the leaks program hooked to its POST_FINI event if an assert fails, while it should
ifdef CUSTOM_MAIN
CFLAGS += -DCUSTOM_MAIN=1
endif

# Only cleans when MAKE_DATA changes.
# DATA_FILE := .make_data
# MAKE_DATA := $(CFLAGS) $(SOURCES)
PRE_RULES :=
# ifneq ($(shell echo "$(MAKE_DATA)"), $(shell cat "$(DATA_FILE)" 2> /dev/null))
# PRE_RULES += clean
# endif


################################################################################################################################


all: $(PRE_RULES) $(NAME)

$(NAME): $(OBJECT_PATHS)
	ar rcs $(NAME) $(OBJECT_PATHS)
# @echo "$(MAKE_DATA)" > $(DATA_FILE)

$(OBJ_DIR)/%.o: %.c $(HEADERS)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)/

fclean: clean
	rm -f $(FCLEANED_FILES)

re: fclean all

bonus: $(OBJECT_PATHS) $(BONUS_OBJECT_PATHS)
#   Calling Make recursively can cause a race condition with testers, which'll cause them to mark files as missing
#   One of the race condition causes is the --jobs <thread_count> flag in the testers, but I haven't been able to find the other cause
#	@$(MAKE) ADD_BONUS=1 all

	ar rcs $(NAME) $(OBJECT_PATHS) $(BONUS_OBJECT_PATHS)


################################################################################################################################


# libft-war-machine and libftTester don't work if bonuses end with _bonus.c
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

# libft-unit-test needs bonuses to end with _bonus.c
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


################################################################################################################################


.PHONY: all clean fclean re bonus remove_bonus_suffix add_bonus_suffix
