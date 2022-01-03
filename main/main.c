#include <stdio.h>

int main() {
        int t = LOG_LEVEL;
        printf("log level: %d\n", t);
#ifdef MARCO
        printf("marco defined\n");
#endif
}