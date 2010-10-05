#include<stdio.h>
*p,a[11];
i,j,k,w;
bub_sort(int *a, int s){
    for (i=0;i-s;i++)
        for (j=s-1;j>i;j--)
            if (a[j-1]>a[j])
                w=a[j],a[j]=a[j-1],a[j-1]= w;
}
main(){
    p=a;
    for(FILE *f=fopen("numbers.dat","r");~fscanf(f,"%d",p++););
    for(bub_sort(p=a,10);*p;p++)
	printf("%d ",*p);
    puts("");
}
