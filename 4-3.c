#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct word_pair{
    char longer_word[10]; 
    char shorter_word[10];
    char combined_word[21];
    int longer_word_length; 
    int shorter_word_length;
} word_pair_t;


word_pair_t create_word_pair(char *a, char *b);
void print_word_pair(word_pair_t *w);

int main(void) {
    char a[10], b[10], buf[30];
    printf("please input %s %s : ");
    fgets(buf, 100, stdin);
    sscanf(buf, "%s %s", a, b);

    word_pair_t w = create_word_pair(a, b);
    print_word_pair(&w);

    return 0;
}

word_pair_t create_word_pair(char *a, char *b) {
    word_pair_t ret;
    int cmp =  strcmp(a, b);

    if(cmp < 0) {
	strcpy(ret.longer_word, a);
	strcpy(ret.shorter_word, b);
    } else if (cmp > 0) {
	strcpy(ret.longer_word, b);
	strcpy(ret.shorter_word, a);
    } else {
	puts("err");
	strcpy(ret.longer_word, a);
	strcpy(ret.shorter_word, "");
    }
    ret.longer_word_length = strlen(ret.longer_word);
    ret.shorter_word_length = strlen(ret.shorter_word);
    return ret;
}

void print_word_pair(word_pair_t *w) {
    printf("%s : %d\n%s : %d\n", w->longer_word, w->longer_word_length, w->shorter_word, w->shorter_word_length);
}
