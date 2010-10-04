main(){
    struct data{char key;struct data *next;};
    struct data *top = malloc(sizeof(struct data));
    top->key='a';
    top->next = malloc(sizeof(struct data));
    top->next->key='b';
    top->next->next = malloc(sizeof(struct data));
    top->next->next->key='c';
    printf("%c\n",top->key);
    printf("%c\n",top->next->key);
    printf("%c\n",top->next->next->key);
}
