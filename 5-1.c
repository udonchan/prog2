void print_stack_ary(char* s, int top){
    printf("<--TOP = %d\n", top);
    for(int i=top-1;i>=0;i--)
	printf("%c\n",*(s+i));
}
int main(){
    print_stack_ary("hoge", 4);
}
