#include <iostream>
#include <array>
#include <cmath>

using std::array, std::sqrt;

//ARRUMAAAAAAAAAAAAAAAAAR, NÃO ESTÁ PRONTA

bool ehprimo(int &num){
    if(num == 1)
        return false;
    if( num == 2)
        return true;
    if( num%2 == 0)
        return false;
    else{
        for (int j = 3; j<=sqrt(num); j+=2){ //dois é o único primo par, então basta verificar os nums impares
            if(num%j == 0)
                return false;
        }
        return true;
    }
};

bool temprimo(auto &arr){
    for( auto &i : arr){
        if(i==2){
            return true;
        }
        else{
            for(int j=2 ; j<i; j++){
                if(i%j == 0)
                    break;
                else if(j==i-1)
                    return true;
            }
        }
    }
    return false;
};

int main(){

    array l{1,4,6,8,10};

    if(temprimo(l)){
        std::cout << "A lista contém algum número primo" << std::endl;
    }
    else{
        std::cout << "A lista não contém nenhum número primo" << std::endl;
    }

    return 0;
}