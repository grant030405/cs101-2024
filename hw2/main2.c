#include <stdio.h>

int main() {
    FILE *input = fopen(__FILE__, "r");
    FILE *output = fopen("main2.txt", "w");
    char c;
    while ((c = fgetc(input)) != EOF) {
        fputc(c, output);
    }    
    fclose(input);
    fclose(output);
    
    return 0;
}
