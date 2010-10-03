#include <stdio.h>

int main (void) {
    int a, b;
    float res;
    char ope, buf[30];

    printf("please input : ");
    fgets(buf, 100, stdin);
    if(sscanf(buf, "%d%c%d", &a, &ope, &b) != 3) {
	printf("err");
	return 1;
    }

    switch (ope) {
	case '+':
	    res = a + b;
	    break;
	case '-':
	    res = a - b;
	    break;
	case '*':
	    res = a * b;
	    break;
	case '/':
	    if (b != 0) {
		res = (float)a / b;
		break;
	    }
	default:
	    printf("err");
	    return 1;
    }
    
    printf("%d%c%d=%lf\n", a, ope, b, res);

    return 0;
}
