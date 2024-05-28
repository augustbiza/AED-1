//ORDENAR OS NÚMEROS DE 10 A 1
#include<stdio.h>

int main(){

    //verificação início(for)
    for(int i = 10; i >= 1; i-- ){
        printf("%d\n", i);
    }

    //verificação final(do-while)
    int j = 10;
    do{
        printf("%d\n", j);
        j--;

    }while(j >= 1);

    return 0;
}