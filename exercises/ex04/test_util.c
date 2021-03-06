#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "endswith.h"
#include "minunit.h"
#include "util.h"

int tests_run = 0;

static char *test1() {
	char *res1 = icmpcode_v4(1);
	char *message = "test1 failed: icmpcode_v4(\"1\") should return 'host unreachable'";
	mu_assert(message, res1 == "host unreachable");
	return NULL;
}

static char *test2() {
	char *res16 = icmpcode_v4(16);
	char *message = "test1 failed: icmpcode_v4(\"16\") should return '[unknown code]'";
	mu_assert(message, res16 == "[unknown code]");
	return NULL;
}

static char *all_tests() {
	mu_run_test(test1);
	mu_run_test(test2);
	return NULL;
}

int main(int argc, char **argv) {
    char *result = all_tests();
    if (result != NULL) {
        printf("%s\n", result);
    } else {
        printf("ALL TESTS PASSED\n");
    }
    printf("Tests run: %d\n", tests_run);

    return result != 0;
}
