#include <stdio.h>
main(){
    int i,*n[5];
    puts("名前を最大5 人分入力して下さい．");
    for(i=0;i<5&&(fgets(n[i]=malloc(20),100,stdin)!=NULL);i++);
    for(i=0;*(n+i+1)!=NULL;i++)printf("%x %s",i[n],i[n]);
}
