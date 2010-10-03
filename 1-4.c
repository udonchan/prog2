#include <stdio.h>
#define INPUT_FILE "gifts.dat"

struct gift {
    char code[10];
    char name[40];
    int price;
};


int main() {
    int i, count;
    struct gift g[100];
    FILE *fp;

    if( (fp = fopen( INPUT_FILE, "r" )) == NULL ) {	
        fprintf(stderr, "cannot open inputfile.\n");
	return 1;
    }

    for (i = 0; i < 100; i++) {
        if (fscanf(fp, "%s %s %d", g[i].code, g[i].name, &g[i].price) == EOF) {
            count = i;
            break;
        }
    }

    for (i = 0; i < count; i++) {
	printf("code : %s\nname : %s\nprice : %d\n", g[i].code, g[i].name, g[i].price);
    }

    return 0;
}
