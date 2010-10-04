struct data{char key;struct data *next;};
void print_stack_list(struct data *top){
    for(struct data *cur=top;cur!=0;cur=cur->next)
	printf("%c\n", cur->key);
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
    print_stack_list(top);
}
