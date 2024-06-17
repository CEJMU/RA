#include <stdio.h>

int main(int argc, char* argv[]) {
    int i, num;
    int steps, max_steps = 0; // Variable für die maximalen Schritte

    for (i = 2; i <= 3000; i++) {
        steps = 0;
        num = i;

        while (num != 1) {
            if (num % 2 == 0) {
                num = num / 2;
            } else {
                num = 3 * num + 1;
            }
            steps++;
        }

        // Aktualisiere den maximalen Schritt, falls erforderlich
        if (steps > max_steps) {
            max_steps = steps;
        }

        printf("Die Anzahl der Schritte, um \
von %d auf 1 zu gelangen, beträgt: %d\n", i, steps);
    }

    printf("\nMaximale Schritte: %d\n", max_steps);

    return 0;
}