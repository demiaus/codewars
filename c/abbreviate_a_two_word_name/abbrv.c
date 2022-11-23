#include <stdio.h>

char *get_initials (const char *full_name, char initials[4]) {
  initials[0] = *full_name & ~32;
  initials[1] = '.';
  while(*full_name++ != ' ');
  initials[2] = *full_name & ~32;
  initials[3] = '\0';
  return initials; // return it
}

int main(void) {

    char i[4];
    printf("%s = %s\n", "Sam Harris", get_initials("Sam Harris", i));

    return 0;
}

