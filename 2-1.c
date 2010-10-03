#include <stdio.h>

main() {
    int a, *p; //(例) 整数型の変数a 　とポインタ変数p を宣言している．
    a = 10; // コメントにたよらずに頑張れ
    printf("a: %d\n", a); // あほか
    printf("&a: %p\n\n", &a); // あほか
    p = &a; // あほか
    printf("p: %p\n", p); // あほか
    printf("*p: %d\n", *p); // あほか
    printf("&p: %p\n\n", &p); // あほか
    a = 20; // あほか
    printf("a: %d\n", a); // あほか
    printf("&a: %p\n\n", &a); // あほか
    printf("p: %p\n", p); // あほか
    printf("*p: %d\n", *p); // あほか
    printf("&p: %p\n", &p); // うんち
}
