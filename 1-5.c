#include <stdio.h>
#include <ctype.h>
#define INPUT_FILE "gifts.dat"

struct gift {
    char code[10];
    char name[40];
    int price;
};


char *stu (char *s) {
    char *p;
    for (p = s; *p; p++) *p = toupper(*p);
    return (s);
}

int main() {
    int i, parm;
    struct gift g[100];
    FILE *fp;

    if( (fp = fopen( INPUT_FILE, "r" )) == NULL ) {	
        fprintf(stderr, "cannot open inputfile.\n");
	return 1;
    }

    for (i = 0; (parm = fscanf(fp, "%s %s %d", g[i].code, g[i].name, &g[i].price)) != EOF; i++ ) {
	printf("code : %s\nname : %s\nprice : ", g[i].code, stu(g[i].name));
	if(parm >= 3)
	    printf("%d\n", g[i].price);
	else
	    puts("xxx");
    }

    return 0;
}
