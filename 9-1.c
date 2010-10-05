#include<stdio.h>
*p,a[11];
i,j,k,w;
sel_sort(int *a, int s){
    for (i=0;i-s;){
        for (j=k=i;j<s;j++)
            if(a[j]<a[k])k=j;
        w=a[k];
        a[k]=a[i];
        a[i++]=w;
    }
}
main(){
    p=a;
    for(FILE *f=fopen("numbers.dat","r");~fscanf(f,"%d",p++););
    for(sel_sort(p=a,10);*p;p++)
	printf("%d ",*p);
    puts("");
}
