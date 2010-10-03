#include <stdio.h>
main(){
    int m,*s,*p, buf[8];
    printf("文字列最大長を入力");
    fgets(buf,8,stdin);
    sscanf(buf,"%d",&m);
    if(m>0){
	if((s=malloc(m))!=NULL){
	    printf("文字列を入力 ");
	    p = s;
	    for(int c;(c=getchar())!='\n';*s++ = c);
	    while(p!=s--)putchar(toupper(*s));
	    puts("");
	}
    }
}
