# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    tester.mk                                          :+:    :+:             #
#                                                      +:+                     #
#    By: sbos <sbos@student.codam.nl>                 +#+                      #
#                                                    +#+                       #
#    Created: 2022/02/04 14:13:59 by sbos          #+#    #+#                  #
#    Updated: 2022/02/04 14:22:28 by sbos          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

################################################################################

export CRITERION_DIR=$(HOME)/.brew/Cellar/criterion/2.3.3-bleeding4
export DEBUG=1

################################################################################

include Makefile

################################################################################

TESTER := tester
TESTER_HEADERS := tests.h

TEST_DIR := tests

################################################################################

TESTER_SOURCES := $(wildcard $(TEST_DIR)/*.c) tester.c

TEST_INCLUDES := $(addprefix -I, $(sort $(dir $(TESTER_HEADERS))))

################################################################################

$(TESTER): all $(TESTER_HEADERS) $(TESTER_SOURCES)
	$(CC) $(CFLAGS) $(TEST_INCLUDES) -L$(CRITERION_DIR)/lib -lcriterion -g3 \
		libft.a $(TESTER_SOURCES) -o $(TESTER)

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
