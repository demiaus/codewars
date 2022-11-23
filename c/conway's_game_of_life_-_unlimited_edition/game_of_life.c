#include <stdio.h>
#include <stdlib.h>

enum Status {
    DEAD,
    ALIVE
};

char *htmlize(int **, int, int);
int **get_generation(int **cells, int generations, int *rowptr, int *colptr) {
  // Your code here
  // NOTE: Please make a deep copy of the GoL universe and modify that instead
  // of the original universe `cells` passed in because the test cases will
  // `free` the memory allocated by your solution *and* to the original grid
  // which will throw an error otherwise.  Also keep in mind that it is considered
  // best practice to keep your function pure.
}