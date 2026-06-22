//prajwol
#include <stdio.h>
#define READ    0x01  // bit 0
#define WRITE   0x02  // bit 1
#define EXECUTE 0x04  // bit 2
int main() {
    unsigned char permissions = 0;
    permissions |= READ | WRITE;   
    printf("Can read: %d\n",    (permissions & READ) != 0);
    printf("Can write: %d\n",   (permissions & WRITE) != 0);
    printf("Can execute: %d\n", (permissions & EXECUTE) != 0);
    permissions &= ~WRITE;          
    printf("After revoke - write: %d\n", (permissions & WRITE) != 0);
    return 0;
}
