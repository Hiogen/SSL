#include <stdio.h>
int main(void) {
    FILE * outArc = fopen("output.txt", "w");
    fprintf(outArc, "%s", "Hello, World!\n");
    fclose(outArc);
}
