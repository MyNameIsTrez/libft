# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    tester.mk                                          :+:    :+:             #
#                                                      +:+                     #
#    By: sbos <sbos@student.codam.nl>                 +#+                      #
#                                                    +#+                       #
#    Created: 2022/02/04 14:13:59 by sbos          #+#    #+#                  #
#    Updated: 2022/02/17 18:46:27 by sbos          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

################################################################################

export DEBUG=1

################################################################################

include Makefile

################################################################################

TESTER := tester
TESTER_HEADERS :=

TESTS_DIR := tests
TESTS_OBJ_DIR := obj_tests

################################################################################

TESTER_SOURCES := $(wildcard $(TESTS_DIR)/*/*.c) $(TESTS_DIR)/tester.c
TESTER_OBJECTS := $(patsubst $(TESTS_DIR)/%,$(TESTS_OBJ_DIR)/%,$(TESTER_SOURCES:.c=.o))

TESTER_HEADERS += $(TESTS_DIR)/tests.h $(TESTS_DIR)/asserts.h libft.h

TEST_INCLUDES := $(sort -I./ $(addprefix -I, $(dir $(TESTER_HEADERS))))

################################################################################

$(TESTER): all $(TESTER_OBJECTS)
	$(CC) $(CFLAGS) $(TEST_INCLUDES) -g3 libft.a $(TESTER_OBJECTS) -o $(TESTER)

$(TESTS_OBJ_DIR)/%.o: $(TESTS_DIR)/%.c $(TESTER_HEADERS)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $(TEST_INCLUDES) -c $< -o $@

################################################################################

re_tester: fclean tester

################################################################################

# TODO: Add grep for KOs so they are much easier to spot
run_tests: run_test_1 run_test_2

run_test_1:
	make -C testers/libft-unit-test f

run_test_2:
	make -C testers/libftTester

################################################################################

.PHONY: tester re_tester run_tests run_test_1 run_test_2

################################################################################
