#include <arpa/inet.h>

int is_valid_ip(const char * addr) {
    struct sockaddr_in sa;
    int result = inet_pton(AF_INET, addr, &(sa.sin_addr));
    return (result != 0)? 1 : 0;
};