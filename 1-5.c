#include <stdio.h>
#include <ctype.h>

typedef struct gift {char code[10];char name[40];int price;}G;
char *u (char *s) {
    for (char *p = s; *p; p++) *p = toupper(*p)
        ;return s;
}

main() {
    G g[100];FILE *fp;
    if((fp = fopen("gifts.dat","r" ))!= NULL) {
	for(int i,parm;EOF!=(parm=fscanf(fp, "%s %s %d", g[i].code, g[i].name, &g[i].price));i++){
	    printf("code : %s\nname : %s\nprice : ", g[i].code, u((i+g)->name));
	    if(parm >= 3)printf("%d\n", g[i].price);else puts("xxx");
	}
    }
}
