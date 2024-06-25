#include <stdio.h>
#include <stdlib.h>

void leiaNum(int *p) {
    printf("Fatorial de ? ");
    scanf("%d", p);
}

int fatorial(int num) {
    long int fat;
    int aux = num;

        if(num == 1 || num == 1) fat = 1;//caso base
        else {
            fat = num * fatorial(aux-1);
        }

    return fat;
}

/*num 3
fat = 3 * fat(2)
            fat = 2 * fat(1)
                        1

*/

int main(void) {

    int num;
    leiaNum(&num);

    long int fat = fatorial(num);
    printf("%d! = %li", num, fat);

    return 0;
}