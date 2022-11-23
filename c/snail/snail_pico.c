#include <stdlib.h>
#include <stdio.h>

int *
snail(size_t *outsz, const int *mx, size_t rows, size_t cols)
{
    size_t n_steps[] = { rows, cols - 1 };  // n of steps before change in direction
    int mov_s[] = { 1, rows };              // Size of steps on 1D-array
    size_t out_s = rows * cols;             // Output array size
    char polarity = 1;                      // Direction of movement (positive | negative)
    unsigned char bool_i = 0;               // Index for mov_s & n_steps (0 | 1)
    unsigned int out_i = 0;
    const int *p = &mx[0];

    int *arr = calloc(out_s, sizeof(int));
    *outsz = out_s;

    while (*n_steps)
    {
        size_t count  = n_steps[bool_i];            // Move this many times in one direction
        int movement = mov_s[bool_i] * polarity;    // Move this amount per step

        while (count--)
        {   printf("%d\n", *p);
            arr[out_i++] = *p;
            if (count)                      // Don't move pointer if count is 0,
            {   p = p + movement;           // correct movement will be set at the end of outer 'while'
            }
        }

        if (bool_i)                         // Every other time,
        {   polarity *= -1;                  // flip movement direction polarity
        }

        n_steps[bool_i]--;                  // Decrement one step of (x | y) axis n_steps, depending on which bool is set 
        bool_i ^=  1;                       // Flip boolean index
        p = p + mov_s[bool_i] * polarity; 
    }

    return arr; 
}

int
main(void)
{
    size_t outsz;
    int *arr = snail(&outsz, (const int[]){ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 }, 4, 4);

    for (unsigned i = 0; i < outsz; i++)
    {   printf("%d ", arr[i]);
    }

    return 0;
}
