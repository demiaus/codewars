#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void uint32_to_ip(uint32_t ip, char *output);

int main(void) {

    uint32_t ip = 2149583361;
    char *ip_string = calloc(16, 1);
    uint32_to_ip(ip, ip_string);
    printf("integed: %u\nstring: %s\n", ip, ip_string);

    return 0;
}

/* Convert and save u_int -form ip to output as a string.
Use bitshift and bitmask to capture values of each octet, most significant first,
convert values to string and append to output */

void uint32_to_ip(uint32_t ip, char *output) {

    unsigned char octets[4] = { 0 };        
    uint32_t mask = 0xFF;

    for (int i = 3; i >= 0; i--) {
        octets[3-i] = ip >> i * 8 & mask;
        char octet[4] = { 0 }; 
        sprintf(octet, "%d", octets[3-i]);
        strcat(output, octet);
        if (i == 0) {
            break;
        }
        strcat(output, ".");
    }
}
