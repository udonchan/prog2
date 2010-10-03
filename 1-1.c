#include <stdio.h>
main(){
    FILE *fp;
    char id[8], name[20];
    int i;
    if((fp = fopen( "gifts.dat", "r" ))!=NULL)while(fscanf( fp, "%s\t%s\t%d\n", id, name, &i)!=EOF)printf("%s %s %d\n", id, name, i);
}
