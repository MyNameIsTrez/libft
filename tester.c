#include "libft.h"
#include "tests.h"

#include <stdlib.h>
#include <criterion/criterion.h>
#include <criterion/output.h>
#include <criterion/logging.h>

struct criterion_test_stats *get_test(struct criterion_suite_stats *suite, char *name)
{
	struct criterion_test_stats *test;
	test = suite->tests;
	while (test != NULL && strcmp(test->test->name, name) != 0)
		test = test->next;
	return (test);
}

void flip_success(struct criterion_suite_stats *suite, struct criterion_test_stats *test)
{
	if (test->test_status == CR_STATUS_FAILED)
	{
		suite->tests_failed--;
		suite->tests_passed++;
	}
	else
	{
		suite->tests_failed++;
		suite->tests_passed--;
	}
}

void flip_success_global(struct criterion_global_stats *stats, struct criterion_test_stats *test)
{
	if (test->test_status == CR_STATUS_FAILED)
	{
		stats->tests_failed--;
		stats->tests_passed++;
	}
	else
	{
		stats->tests_failed++;
		stats->tests_passed--;
	}
}

ReportHook(POST_SUITE)(struct criterion_suite_stats *a)
{
	struct criterion_test_stats *test;
	if (strcmp(a->suite->name, "ft_lstsize") == 0)
	{
		test = get_test(a, "tail_recursion");
		if (test != NULL && test->timed_out)
			flip_success(a, test);
	}
	size_t	total_tested = a->tests_crashed + a->tests_failed + a->tests_passed;
	if (total_tested != 0)
		printf("\e[1mFinished Suite \e[33;22m%s\e[39;1m: Tested: \e[34;22m%zu\e[39;1m | Passing: \e[32;22m%zu\e[39;1m | Failing: \e[22m%s%zu\e[39;1m | Crashing: \e[22m%s%zu\e[0m\n", a->suite->name, total_tested, a->tests_passed, a->tests_failed > 0 ? "\e[31m" : "", a->tests_failed, a->tests_crashed > 0 ? "\e[31m" : "", a->tests_crashed);
}

ReportHook(POST_ALL)(struct criterion_global_stats *stats)
{
	struct criterion_suite_stats *suite;
	struct criterion_test_stats *test;

	suite = stats->suites;
	while (suite != NULL && strcmp(suite->suite->name, "ft_lstsize") != 0)
		suite = suite->next;
	if (suite != NULL)
	{
		test = get_test(suite, "tail_recursion");
		if (test != NULL && test->timed_out)
			flip_success_global(stats, test);
	}
}

void new_log_timeout(CR_UNUSED struct criterion_test_stats *stats)
{
	if (strcmp(stats->test->category, "ft_lstsize") == 0 && strcmp(stats->test->name, "tail_recursion") == 0)
		return ;
	printf("[\e[0;31mFAIL\e[0m] %s::%s: Timed out. (%3.2fs)\n", stats->test->category, stats->test->name, stats->elapsed_time);
}

ReportHook(PRE_ALL)(struct criterion_test_set *a)
{
	(void)a;
	criterion_options.logger->log_test_timeout = new_log_timeout;
}

#if __has_feature(address_sanitizer)
#else

ReportHook(POST_FINI)(struct criterion_test_stats *a)
{
	if (a->timed_out)
		return ;
	char *cmd = ft_strjoin(ft_strjoin(
		"leaks --quiet $(pgrep -P ", ft_itoa(getpid())), " | head -1) > /tmp/test_leaks");
	int ret = system(cmd);
	if (ret != EXIT_SUCCESS)
	{
		system("cat /tmp/test_leaks");
		printf("\e[33m%s\e[0;1m::\e[0;33m%s\e[0;1m had a leak\e[0m\n", a->test->category, a->test->name);
	}
}

#endif

#ifdef CUSTOM_MAIN

int main(void) {
	RUN_TEST(ft_lstsize, basic_test);
	// RUN_TEST(ft_lstsize, tail_recursion);
}

#endif
