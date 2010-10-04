struct data{char key;struct data *next;};
void print_stack_list(struct data *top){
    for(struct data *cur=top;cur->next!=0;cur=cur->next)
	printf("%c\n", cur->key);
}
void push (struct data **top, char key){
    struct data *new=malloc(sizeof(struct data));
    new->key = key;
    new->next = *top;
    *top = new;
}
main(){
    struct data *top=malloc(sizeof(struct data));
    push(&top, 'e');
    push(&top, 'g');
    push(&top, 'o');
    push(&top, 'h');
    print_stack_list(top);
}
