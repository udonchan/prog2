#include<stdio.h>
*p,a[11];
i,j,k,w;
ins_sort(int *a, int s){
    for(i=1;i<s;i++)
	for(j=i;a[j]<a[j-1]&&j;){
	    w=a[j];
	    a[j]=a[j-1];
	    a[j---1]=w;
	}
}
main(){
    p=a;
    for(FILE *f=fopen("numbers.dat","r");~fscanf(f,"%d",p++););
    for(ins_sort(p=a,10);*p;p++)
	printf("%d ",*p);
    puts("");
}
