# My tester:
# make -f tester.mk tester && echo "\n" && ./tester --jobs 1


export DEBUG=1

include Makefile

TESTER := tester
TESTER_HEADERS := tests.h

TEST_DIR := tests

TESTER_SOURCES := $(wildcard $(TEST_DIR)/*.c) tester.c

TEST_INCLUDES := $(addprefix -I, $(sort $(dir $(TESTER_HEADERS))))

$(TESTER): all $(TESTER_HEADERS) $(TESTER_SOURCES)
	$(CC) $(CFLAGS) $(TEST_INCLUDES) -L$(HOME)/.brew/Cellar/criterion/2.3.3/lib -lcriterion -g3 libft.a $(TESTER_SOURCES) -o $(TESTER)

re_tester: fclean tester

.PHONY: tester re_tester
