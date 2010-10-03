#include <stdio.h>
#define INPUT_FILE "gifts.dat"

int main() {
    FILE *fp;
    char id[8];
    char name[20];
    int i;
	
    if( (fp = fopen( INPUT_FILE, "r" )) == NULL ) {
	puts( "Cannot read input file" );
	return 1;
    }

    while( fscanf( fp, "%s\t%s\t%d\n", id, name, &i ) != EOF) {
	printf("%s %s %d\n", id, name, i);
    }

    fclose(fp);
    
    return 0;
}
