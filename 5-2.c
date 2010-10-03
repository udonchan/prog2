#define MAX 20
void print_stack_ary(char* s, int top){
    printf("<--TOP = %d\n", top);
    for(int i=top-1;i>=0;i--)
	printf("%c\n",*(s+i));
}
void push(char c, char* s, int* top){
    *(s+(*top)++) = c;
}
int main(){
    int top;
    char s[MAX];
    push ('h', s, &top);
    push ('o', s, &top);
    push ('g', s, &top);
    push ('e', s, &top);
    print_stack_ary(s, top);
}
