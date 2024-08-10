#include <stdio.h>

int main(void) {

    int v[9] = {1,2,3,4,5,6,7,8,9}, primo[9], qt, pos = 0;

    for(int c = 0; c < 9; c++) {
        qt = 0;
        for(int i = 2; i <= v[c]; i++) {
            if(v[c] % i == 0 ) qt++;
        }
        if(qt++ <= 1 && v[c] != 1) {
            primo[pos] = v[c];
            pos++;
        }
    }

    for(int c = 0; c < pos; c++) {      //c-pos  pois eu somo+1 na pos depois de guardar o valor dela no vetor de primos(ln 14)
        printf("%d  ", primo[c]);
    }
    return 0;
}
