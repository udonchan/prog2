struct data{char key;struct data *next;};
struct queue{struct data *top, *rear;};
void print_queue_list(struct queue q){
    for(struct data *cur=q.top;;cur=cur->next){
	printf("%c", cur->key);
	if(cur==q.top && cur==q.rear){
	    puts("<--TOP&REAR");
	    break;
	}else if(cur==q.top)
	    puts("<--TOP");
	else if(cur==q.rear){
	    puts("<--REAR");
	    break;
	}else puts("");
    }
}
void enqueue (struct queue *q, char key){
    if(q->top!=0) {
	q->rear->next=malloc(sizeof(struct data));
	q->rear=q->rear->next;
	q->rear->key=key;
    } else {
	q->top=malloc(sizeof(struct data));
	q->top->key=key;
	q->rear=q->top;
    }
}
main(){
    struct queue q;
    enqueue(&q,'h');
    enqueue(&q,'o');
    enqueue(&q,'g');
    enqueue(&q,'e');
    print_queue_list(q);
}
