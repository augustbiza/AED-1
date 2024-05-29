//CALCULAR OS DEZ PRIMERIOS TERMOS DA SEQUÊNCIA: 10/100, 99/11, 12/98, 97/13, 14/96, ...
#include<stdio.h>

int main(){

    int a = 10, b = 100;
    for(int c = 0; c < 10; c++)
    {

        if(c % 2){
            printf("%d/%d\n", b, a);
        }
        else{
            printf("%d/%d\n", a, b);
        }    

        a++;
        b--;

    }//fim for

    return 0;
}