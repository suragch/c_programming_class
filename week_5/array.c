#include <stdio.h>

int main(void) {
    
    int a = 3;
    int b = 5;
    int c = 7;
    int d = 4;
    int e = 12;
    int f = 2;
    int g = 0;
    int h = 1;
    int i = 5;
    int j = 24;

    printf("%d %d %d %d %d %d %d %d %d %d\n", a, b, c, d, e, f, g, h, i, j);

    printf("%d ", a);
    printf("%d ", b);
    printf("%d ", c);
    printf("%d ", d);
    printf("%d ", e);
    printf("%d ", f);
    printf("%d ", g);
    printf("%d ", h);
    printf("%d ", i);
    printf("%d\n", j);
  
    int array[] = {3, 5, 7, 4, 12, 2, 0, 1, 5, 24};

    int index;
    for (index = 0; index < 10; index++) {
        printf("%d ", array[index]);
    }
    printf("\n");

    printf("%d\n", array[9]);

    return 0;
}
