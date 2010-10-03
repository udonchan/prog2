main() {
    char *p1,*p2;
    p1=p2="Winter";
    while(*p1++!='\0');
    while(*p2!=putchar(*p1--));
    puts("");
}
