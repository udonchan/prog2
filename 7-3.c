struct data{char key;struct data *next;};
struct queue{struct data *top, *rear;};
void print_queue_list(struct queue q) {
    for(struct data *cur=q.top;cur!=top.rear;cur=cur->next)
	printf("%c\n", cur->key);
}
main(){
    struct data *top=malloc(sizeof(struct data));
    top->key='a';
    top->next = malloc(sizeof(struct data));
    top->next->key='b';
    top->next->next = malloc(sizeof(struct data));
    top->next->next->key='c';
    struct queue q = {top, top->next->next};
    print_queue_list(q);
}
