c;main(t){for(char*p,s[99];gets(s);puts(&s))for(p=s;*p;p++,c++)if(toupper(*p)==84&&*(p+1)=='h')*p=*(p+1)=43,t++;printf("strings:%d\nth:%d\n",c,t);}
