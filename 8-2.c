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
char pop (struct data **top){
    char ret = (*top)->key;
    struct data *tmp = *top;
    *top = (*top)->next;
    free(tmp);
    return ret;
}
int main(){
    struct data *top=malloc(sizeof(struct data));
    push(&top, 'e');
    push(&top, 'g');
    push(&top, 'o');
    push(&top, 'h');
    print_stack_list(top);
    printf("popd : %c\n", pop(&top));
    printf("popd : %c\n", pop(&top));
    printf("popd : %c\n", pop(&top));
    printf("popd : %c\n", pop(&top));
    print_stack_list(top);
}
