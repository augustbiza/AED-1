#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("cls");

    int n;
    printf("n: ");
    scanf("%d", &n);
    
    float fat;

    for(int c = 1; c <= n; c++) {
        fat = 1;
            for(int i = 1; i <= c; i++) {
                fat *= i;
            }
            printf("%d! = %.f\n", c, fat);
    }

    return 0;
}
