#include <stdio.h>

int main(){
    typedef struct gift{char code[10];char name[40];int price;}G;
    G g[100];
    FILE *fp;
    if((fp=fopen("gifts.dat","r"))!=NULL)
	for(int i=0;(fscanf(fp, "%s %s %d", g[i].code, g[i].name, &g[i].price)!=EOF)&&i<100;i++)
	    printf("code : %s\nname : %s\nprice : %d\n", i[g].code, (g+i)->name, g[i].price);
}
