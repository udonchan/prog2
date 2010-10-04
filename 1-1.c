#include<stdio.h>
*f,d[8],n[20];main(i){for(f=fopen("gifts.dat","r");~fscanf(f,"%s%s%d",d,n,&i);printf("%s %s %d\n",d,n,i));}
