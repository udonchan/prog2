#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 20

int main (void) {
    int i, count;
    char *name[5];

    puts("名前を最大5 人分入力して下さい．");
    for (i = 0; i < 5; i++) {
	name[i] = malloc(sizeof(char) * MAX_LENGTH);
	if(fgets(name[i], 100, stdin) == NULL)
	    break;
    }

    count = i;
    for (i = 0; i < count; i++){
	printf("%x %s", name[i], name[i]);
    }
    
    return 0;
}
