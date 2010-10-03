#include <stdio.h>

int main() {
    FILE *fp;

    if( (fp = fopen( "helloworld.txt", "w" )) == NULL ) {
	puts( "Cannot open file." );
	return 1;
    }
    fputs("Hello world!!\n", fp);

    fclose(fp);
    return 0;
}
