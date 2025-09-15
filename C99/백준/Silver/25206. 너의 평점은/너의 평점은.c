#include <stdio.h>
#include <string.h>

int main() {
    char sub[51];
    double cre;
    char rank[3];
    double sum_score = 0.0, sum_cre = 0.0;

    for (int i = 0; i < 20; i++) {
        scanf("%s %lf %s", sub, &cre, rank);

        double point = 0.0;

        if (strcmp(rank, "A+") == 0) point = 4.5;
        else if (strcmp(rank, "A0") == 0) point = 4.0;
        else if (strcmp(rank, "B+") == 0) point = 3.5;
        else if (strcmp(rank, "B0") == 0) point = 3.0;
        else if (strcmp(rank, "C+") == 0) point = 2.5;
        else if (strcmp(rank, "C0") == 0) point = 2.0;
        else if (strcmp(rank, "D+") == 0) point = 1.5;
        else if (strcmp(rank, "D0") == 0) point = 1.0;
        else if (strcmp(rank, "F") == 0) point = 0.0;
        else if (strcmp(rank, "P") == 0) continue;

        sum_score += cre * point;
        sum_cre += cre;
    }

    printf("%lf\n", sum_score / sum_cre);
    return 0;
}
