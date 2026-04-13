#include "gradebook.h"

double average_score(const int *scores, int count) {
    int total = 0;
    int i;

    if (scores == 0 || count <= 0) {
        return 0.0;
    }

    for (i = 0; i < count; i++) {
        total += scores[i];
    }

    return (double)total / (double)count;
}

char letter_grade(double score) {
    if (score >= 90.0) {
        return 'A';
    }
    if (score >= 80.0) {
        return 'B';
    }
    if (score >= 70.0) {
        return 'C';
    }
    if (score >= 60.0) {
        return 'D';
    }
    return 'F';
}
