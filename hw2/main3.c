#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file;
    char filename[] = __FILE__;
    char line[256];
    int line_num = 0;
    int main_line = 0;
    
    file = fopen(filename, "r");

    while (fgets(line, sizeof(line), file)) {
        line_num++;
        if (strstr(line, "int main(")) {
            main_line = line_num; 
            break;
        }
    }
    printf("%d int main() {", main_line);
     
    fclose(file);
    return 0;
}
