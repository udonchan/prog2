#include <stdio.h>

struct gift {
    char code[10];
    char name[40];
    int price;
};


int main() {
    struct gift g = { "JZK-30", "Jizake tsumeawase", 4500 };
    printf("code : %s\nname : %s\nprice : %d\n", g.code, g.name, g.price);
    return 0;
}
