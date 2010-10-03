#define MAX 100
void print_queue_ary(char* q, int top, int rear){
    for(int i=top;i<rear;i++){
	printf("%c",q[i]);
	if(i==top)printf("<--TOP=%d\n", top);
	else puts("");
    }
    printf("<--REAR=%d\n", rear);
}
void enqueue(char c, char* q, int* top, int* rear){
    *(q+(*rear)++) = c;
}
char dequeue(char* q, int* top, int* rear){
    return *(q+(*top)++);
}
main(){
    int t,r;
    char s[MAX];
    t=r=0;
    enqueue('h',s,&t,&r);
    enqueue('o',s,&t,&r);
    enqueue('g',s,&t,&r);
    enqueue('e',s,&t,&r);
    print_queue_ary(s, t, r);
    printf("dequeued : %c\n", dequeue(s, &t, &r));
    print_queue_ary(s, t, r);
    printf("dequeued : %c\n", dequeue(s, &t, &r));
    print_queue_ary(s, t, r);
    printf("dequeued : %c\n", dequeue(s, &t, &r));
    print_queue_ary(s, t, r);
    printf("dequeued : %c\n", dequeue(s, &t, &r));
}
