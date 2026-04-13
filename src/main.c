#include <stdio.h>
#include <stdlib.h>

#include "gradebook.h"

int main(int argc, char *argv[]) {
    int i;
    int count;
    int *scores;
    double average;

    if (argc < 2) {
        fprintf(stderr, "Usage: %s <score1> <score2> ...\n", argv[0]);
        return 1;
    }

    count = argc - 1;
    scores = (int *)malloc(sizeof(int) * count);
    if (scores == 0) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    for (i = 0; i < count; i++) {
        scores[i] = atoi(argv[i + 1]);
    }

    average = average_score(scores, count);
    printf("Average: %.2f\n", average);
    printf("Letter Grade: %c\n", letter_grade(average));

    free(scores);
    return 0;
}
