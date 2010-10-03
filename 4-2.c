#include <stdio.h>
#include <stdlib.h>

void swap(int *x,int *y);

int main()
{
    int x, y;
    printf("二つの整数値を入力してください：");
    scanf("%d %d", &x, &y);
    printf("変数xの値は%d，変数yの値は%dです．\n", x, y);
    swap(&x, &y);
    printf("swap()を呼び出した後の変数xの値は%d，変数yの値は%dです．\n", x, y);
}

void swap(int *x, int *y) {
    int c;
    c = *x;
    *x = *y;
    *y = c;
}
