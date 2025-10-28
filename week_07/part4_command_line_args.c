#include <stdio.h>

int main(int argc, char *argv[]) {
    int i = 0;
    while (i < argc) {
        printf("index: %d    String: %s\n", i, argv[i]);
        i++;
    }
    return 0;
}
