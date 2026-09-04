#include <cstdio>
#include <string>
#include "DivisorChallenge.h"

void StartDivisorChallenge() {
    int input = 0;
    int currentArrayIndex = 0;

    printf("\nEnter a number to get all divisors\n");
    scanf("%d", &input);

    int *divisors = new int[input];

    for(int i = input; i > 0; i--) {
        if (input % i == 0) {
            divisors[currentArrayIndex] = i;
            currentArrayIndex++;
            // printf("Dividable by %d and current index is now %d\n", i, currentArrayIndex);
        }
    }

    printf("%d is dividable by ",input);
    for (int i = 0; i < currentArrayIndex; i++) {
        printf("%d, ", divisors[i]);
    }

    printf("\n");
    delete[] divisors;
}
