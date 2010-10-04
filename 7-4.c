struct data{char key;struct data *next;};
struct queue{struct data *top, *rear;};
void print_queue_list(struct queue q){
    for(struct data *cur=q.top;;cur=cur->next){
	printf("%c", cur->key);
	if(cur==q.top)puts("<--TOP");
	else if(cur==q.rear){
	    puts("<--REAR");
	    break;
	}
	else puts("");
    }
}
main(){
    struct data *top=malloc(sizeof(struct data));
    top->key='h';
    top->next = malloc(sizeof(struct data));
    top->next->key='o';
    top->next->next = malloc(sizeof(struct data));
    top->next->next->key='g';
    top->next->next->next = malloc(sizeof(struct data));
    top->next->next->next->key='e';
    struct queue q = {top, top->next->next->next};
    print_queue_list(q);
}
