#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float ang;
    std::cout<<"Valor do angulo(graus)? ";
    std::cin>>ang;

    //int voltas = ang / 360;
    float novoAng = (int)ang % 360;     //para ter resto o dividendo precisa ser int

    //angulos positivos
    if(ang >= 0) {
        //uma volta
        if(ang <= 360) {
            if(ang < 90) std::cout<<"Quadrante 1";
            else if(ang > 90 && ang < 180) std::cout<<"Quadrante 2";
            else if(ang > 180 && ang < 270) std::cout<<"Quadrante 3";
            else if(ang > 270 && ang < 360) std::cout<<"Quadrante 4";
            else if(ang == 90 || ang == 180) std::cout<<"Eixo das cordenadas Y";
            else std::cout<<"Eixo das cordenadas X";
        }
        //mais de uma volta
        else {
            if(novoAng < 90) std::cout<<"Quadrante 1";
            else if(novoAng > 90 && novoAng < 180) std::cout<<"Quadrante 2";
            else if(novoAng > 180 && novoAng < 270) std::cout<<"Quadrante 3";
            else if(novoAng > 270 && novoAng < 360) std::cout<<"Quadrante 4";
            else if(novoAng == 90 || novoAng == 180) std::cout<<"Eixo das cordenadas Y";
            else std::cout<<"Eixo das cordenadas X";        
        }
        
    }
    //angulos negativos
    else {
        //uma volta
        if(ang > -90) std::cout<<"Quadrante 4";
        else if(ang < -90 && ang > -180) std::cout<<"Quadrante 3";
        else if(ang < -180 && ang > -270) std::cout<<"Quadrante 2";
        else if(ang < -270 && ang > -360)std::cout<<"Quadrante 1";
        else if(ang == -270 || ang == -90) std::cout<<"Eixo das cordenadas Y";
        else std::cout<<"Eixo das cordenadas X";

        
        //mais de uma volta
        if(novoAng > -90) std::cout<<"Quadrante 4";
        else if(novoAng < -90 && novoAng > -180) std::cout<<"Quadrante 3";
        else if(novoAng < -180 && novoAng > -270) std::cout<<"Quadrante 2";
        else if(novoAng < -270 && ang > -360)std::cout<<"Quadrante 1";
        else if(novoAng == -270 || novoAng == -90) std::cout<<"Eixo das cordenadas Y";
        else std::cout<<"Eixo das cordenadas X";
    }

    return 0;
}