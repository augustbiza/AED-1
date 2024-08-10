#include <stdio.h>

int main(void) {

    int a[10]={0,1,2,3,4,5,9,8,7,6}, b[10]={10,9,8,7,6,1,2,3,4,5}, r[20]={0};

    for(int c = 0, i = 0; c < 10; c++) {
        r[i] = a[c];
        i+=2;
    }
    for(int c = 0, i = 1; c < 10; c++) {
        r[i] = b[c];
        i+=2;
    }

    for(int c = 0; c < 20; c++) {
        printf("%d  ", r[c]);
    }

    return 0;
}
