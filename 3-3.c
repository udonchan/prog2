#include <stdio.h>
#include <stdlib.h>

struct gift {
    char code[10];
    char name[40];
    int price;
};


int main() {
    int i, max_length;
    char buf[10];
    char input_file[256];
    FILE *input_fp, *output_fp;
    struct gift *g;
    
    printf("データ数を入力して下さい :");
    fgets(buf, 100, stdin);
    sscanf(buf, "%d", &max_length);

    printf("ファイル名を指定して下さい : ");
    fgets(buf, 100, stdin);
    sscanf(buf, "%s", input_file);

    if( (input_fp = fopen( input_file, "r" )) == NULL ) {	
        fprintf(stderr, "cannot open inputfile.\n");
	return 1;
    }

    g = (struct gift *)malloc(sizeof(struct gift) * max_length);

    for (i = 0; i < max_length; i++) {
        if (fscanf(input_fp, "%s %s %d", g[i].code, g[i].name, &g[i].price) == EOF) {
            break;
        }
    }

    if( (output_fp = fopen("out.txt", "w" )) == NULL ) {	
        fprintf(stderr, "cannot open output.\n");
	return 1;
    }

    for (i = 0; i < max_length; i++) {
	fprintf(output_fp, "code : %s\nname : %s\nprice : %d\n", g[i].code, g[i].name, g[i].price);
    }

    puts("フォーマット変換後ファイルに出力しました．");

    fclose(input_fp);
    fclose(output_fp);

    return 0;
}
