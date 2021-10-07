include names.mk
include settings.mk


LIBFT_OBJECT_FILENAMES := ${addsuffix .o,${addprefix ft_,${LIBFT_OBJECT_NAMES}}}
LIBFT_OBJECTS := ${addprefix obj/,${LIBFT_OBJECT_FILENAMES}}


all: $(NAME)

$(NAME): $(LIBFT_OBJECTS)
	@ar rcs ${NAME} $^

obj/%.o: %.c $(HEADERS)
#	@printf "%s\n" $<
	@mkdir -p $(@D)
	@$(CC) -c $(C_FLAGS) -o $@ $<

clean:
	@rm -f $(LIBFT_OBJECTS)

fclean: clean
	@rm -f $(NAME) $(OBJECT_FILES)

re: fclean all

# bonus:
#	compile with bonus

.PHONY: all clean fclean bonus