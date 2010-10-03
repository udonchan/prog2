#include <stdio.h>

int main( void ) {
    char *p1, *p2;
    p2 = "Winter";
    p1 = p2;

    while (*p1!='\0') {
	*p1++;
    }

    while (*p2!=*p1--) {
	putchar(*p1);
    }
    puts("");
    return 0;
}
