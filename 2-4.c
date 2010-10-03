#include <stdio.h>

int main( void ) {
    int char_count = 0, th_count = 0;
    char str[100];
    char *p;

    while (fgets(str, 100, stdin) != NULL) {
        for (p = str; *p != '\0'; p++) {
            char_count++;
            if (strncmp(p, "th", 2) == 0 || strncmp(p, "Th", 2) == 0) {
                th_count++;
                *p = '+';
                *++p = '+';
            }
        }
        fputs(str, stdout);
    }

    printf("文字数：%d\n", char_count);
    printf("thの出現回数：%d\n", th_count);

    return 0;
}
