#include <stdio.h>
main(){
    FILE *fp;
    int id[8],name[20],i;
    if((fp=fopen("gifts.dat","r"))!=NULL)
	while(fscanf(fp,"%s\t%s\t%d\n",id,name,&i)!=EOF)
	    printf("%s %s %d\n", id, name, i);
}
