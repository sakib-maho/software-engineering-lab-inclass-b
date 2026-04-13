#include <stdio.h>

#include "gradebook.h"

static int assert_equal_int(char expected, char actual, const char *message) {
    if (expected != actual) {
        printf("FAIL: %s (expected=%c, actual=%c)\n", message, expected, actual);
        return 1;
    }
    return 0;
}

static int assert_equal_double(double expected, double actual, const char *message) {
    double diff = expected - actual;
    if (diff < 0) {
        diff = -diff;
    }
    if (diff > 0.0001) {
        printf("FAIL: %s (expected=%.2f, actual=%.2f)\n", message, expected, actual);
        return 1;
    }
    return 0;
}

int main(void) {
    int failures = 0;
    int scores[] = {95, 80, 75, 90};
    double avg = average_score(scores, 4);

    failures += assert_equal_double(85.00, avg, "average_score computes mean");
    failures += assert_equal_int('A', letter_grade(91.2), "letter_grade A");
    failures += assert_equal_int('C', letter_grade(72.0), "letter_grade C");
    failures += assert_equal_int('F', letter_grade(39.0), "letter_grade F");

    if (failures == 0) {
        printf("All tests passed.\n");
        return 0;
    }

    return 1;
}
