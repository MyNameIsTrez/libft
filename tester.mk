# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    tester.mk                                          :+:    :+:             #
#                                                      +:+                     #
#    By: sbos <sbos@student.codam.nl>                 +#+                      #
#                                                    +#+                       #
#    Created: 2022/02/04 14:13:59 by sbos          #+#    #+#                  #
#    Updated: 2022/03/29 16:41:21 by sbos          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

################################################################################

export DEBUG=1

################################################################################

include Makefile

################################################################################

TESTS_DIR := tests
TESTS_OBJ_DIR := obj_tests

MASSERT_DIR := libmassert

TESTER := tester

TESTER_HEADERS :=								\
	./libft.h									\
	$(TESTS_DIR)/tests.h						\
	$(MASSERT_DIR)/massert.h					\
	tests/unstable/overwritten_headers/stdlib.h

TESTER_LIBS := -L$(MASSERT_DIR) -lmassert -L. -lft

################################################################################

TESTER_SOURCES := $(wildcard $(TESTS_DIR)/*/*.c) $(TESTS_DIR)/tester.c
TESTER_OBJECTS := $(patsubst $(TESTS_DIR)/%,$(TESTS_OBJ_DIR)/%,$(TESTER_SOURCES:.c=.o))

TESTER_INCLUDES := $(sort $(addprefix -I, $(dir $(TESTER_HEADERS))))

################################################################################

all: $(TESTER)

$(TESTER): $(NAME) $(MASSERT_DIR)/libmassert.a $(TESTER_OBJECTS)
	$(CC) $(CFLAGS) $(TESTER_INCLUDES) -g3 $(TESTER_OBJECTS) $(TESTER_LIBS) -o $(TESTER)

$(TESTS_OBJ_DIR)/%.o: $(TESTS_DIR)/%.c $(TESTER_HEADERS)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $(TESTER_INCLUDES) -c $< -o $@

################################################################################

$(MASSERT_DIR)/libmassert.a:
	@$(MAKE) -C $(MASSERT_DIR)

.PHONY: $(MASSERT_DIR)/libmassert.a

################################################################################

fclean_tester: fclean
	rm -rf $(TESTS_OBJ_DIR)
	rm -f $(TESTER)
	@$(MAKE) -C $(MASSERT_DIR) fclean

re_tester: fclean_tester $(TESTER)

.PHONY: fclean_tester re_tester

################################################################################

# TODO: Add grep for KOs so they are much easier to spot
run_tests: run_test_1 run_test_2

run_test_1:
	make -C testers/libft-unit-test f

run_test_2:
	make -C testers/libftTester

.PHONY: run_tests run_test_1 run_test_2

################################################################################
