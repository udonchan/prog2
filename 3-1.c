#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (void) {
    int max_length;
    char c, *str, *p, buf[100];

    printf("文字列最大長を入力してください :");
    fgets(buf, 100, stdin);
    sscanf(buf, "%d", &max_length);

    if (max_length < 1)
	return 0;

    if ((str = malloc((size_t)(sizeof(char) * max_length))) == NULL ) {
	fprintf(stderr, "malloc failed.\n");
	return 1;
    }

    printf("文字列を入力してください : ");

    p = str;
    while ((c = getchar()) != '\n')
	*str++ = c;
    while(*p != *str--)
	putchar(toupper(*str));
    puts("");

    free(p);
    return 0;
}
