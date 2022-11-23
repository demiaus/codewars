// by https://www.codewars.com/users/xczh.me
#include <inttypes.h>

void uint32_to_ip(uint32_t ip, char *output)
{
  uint8_t *p = &ip;
  sprintf(output, "%u.%u.%u.%u", p[3], p[2], p[1], p[0]);
}