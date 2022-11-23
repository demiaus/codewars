// https://www.codewars.com/kata/525f50e3b73515a6db000b83/train/cs

#include <stdio.h>

char *create_phone_number(char phnum[15], const unsigned char nums[10])
{
    sprintf(phnum, "(%d%d%d) %d%d%d-%d%d%d%d",
    nums[0], nums[1], nums[2], nums[3], nums[4], nums[5], nums[6], nums[7], nums[8], nums[9]);
    return phnum;
}

int main(void) {

    const unsigned char nums[] = {1,2,3,4,5,6,7,8,9,0};
    char phnum[15];

    printf("%s\n", create_phone_number(phnum, nums));

    return 0;
}