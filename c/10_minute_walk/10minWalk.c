#include <stdbool.h>
#include <string.h>


bool isValidWalk(const char *walk) {

        if (strlen(walk) != 10) {                       // Consider only 10 minute solutions
                return 0;
        }

        int x, y;
        unsigned i, j, k;
        x = 0, y = 0;

        const char *dirs = "nswe";                      // These arrays map onto each other:
        unsigned mov[] = {1, -1, 1, -1};                // The movement value of character dirs[index] is found in mov[index]

        for (i = 0; i < 10; ++i) {                      // Checking for movement on the y-axis (N/S)
                for (j = 0; j < 2; ++j) {
                        if (walk[i] == dirs[j]) {
                                y += mov[j];            // Adding the movement value to the Y-coordinate
                        }
                }
                                                        // Checking for movement on the X-axis (W/E)
        for (k = 2; k < 4; ++k) {
            if (walk[i] == dirs[k]) {
                x += mov[k];                            // Adding the movement value to the x-coordinate
            }
        }
    }

    return (x == 0) && (y == 0);                        // If X and Y coordinate values are both 0, return true
}

