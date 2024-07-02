//FIBONACCI INTERATIVO:    0  1   1   2   3   5   8   13  21 ...
//                         1° 2°  3°  4°  5°  6°  7°  8°     ...
#include <stdio.h>



int main(void) {

    system("cls");

    int n, n1 = 0, n2 = 1, n3;
    printf("Informe o valor de n: ");
    scanf("%d", &n);

    for(int c = 0; c < n-1; c++) {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
    printf("%d", n3);

    return 0;
}