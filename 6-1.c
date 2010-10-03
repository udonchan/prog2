void print_queue_ary(char* q, int top, int rear){
    for(int i=top;i<rear;i++){
	printf("%c",q[i]);
	if(i==top)printf("<--TOP=%d\n", top);
	else puts("");
    }
    printf("<--REAR=%d\n", rear);
}
main(){
    print_queue_ary("\0\0\0hoge", 3, 7);
}
