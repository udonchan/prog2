#include <stdio.h>
typedef struct{char code[10];char name[40];int price;}G;
char*u(char*s){
    for (char*p=s;*p=toupper(*p);p++);
    return s;
}
main(FILE*fp){
    G g[100];
    if(fp=fopen("gifts.dat","r")) 
	for(int i,parm;EOF!=(parm=fscanf(fp,"%s%s%d",i[g].code,i[g].name,&i[g].price));i++){
	    printf("code : %s\nname : %s\nprice : ",g[i].code,u(g[i].name));
	    if(parm-2)printf("%d\n", g[i].price);
	    else puts("xxx");
	}
}	
