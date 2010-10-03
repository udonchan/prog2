#include <stdio.h>
main() {
    FILE *fp;if((fp = fopen( "helloworld.txt", "w" ))!=NULL)fputs("Hello world!!\n", fp);
}
