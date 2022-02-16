# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    tester.mk                                          :+:    :+:             #
#                                                      +:+                     #
#    By: sbos <sbos@student.codam.nl>                 +#+                      #
#                                                    +#+                       #
#    Created: 2022/02/04 14:13:59 by sbos          #+#    #+#                  #
#    Updated: 2022/02/16 14:28:17 by sbos          ########   odam.nl          #
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

################################################################################

TESTER_SOURCES := $(wildcard $(TESTS_DIR)/*/*.c) tester.c

TESTER_HEADERS += $(TESTS_DIR)/tests.h

TEST_INCLUDES := -I. $(addprefix -I, $(sort $(dir $(TESTER_HEADERS))))

################################################################################

$(TESTER): all $(TESTER_HEADERS) $(TESTER_SOURCES)
	$(CC) $(CFLAGS) $(TEST_INCLUDES) -g3 libft.a $(TESTER_SOURCES) -o $(TESTER)

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
